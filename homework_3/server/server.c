#include "server.h"

const int BUFFERMAXSIZE = 1024;

ssize_t ReceiveMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size) {
    ssize_t ReceiveTry = recv(SocketFileDescriptor, buffer, size, 0);

    if (ReceiveTry < 0) {
        perror("ERROR: can't receive message");
        exit(EXIT_FAILURE);
    }

    return ReceiveTry;
}

ssize_t SendMessage(int SocketFileDescriptor, uint8_t* buffer, ssize_t size) {
    ssize_t SendTry = send(SocketFileDescriptor, buffer, size, 0);

    if (SendTry < 0) {
        perror("ERROR: can't send message");
        exit(EXIT_FAILURE);
    }

    return SendTry;
}

int CreateSocketServer(int port) {
    int SocketFileDescriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);

    if (SocketFileDescriptor < 0) {
        perror("ERROR: can't create socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in ServerAddress;
    ServerAddress.sin_family = AF_INET;
    ServerAddress.sin_port = htons(port);
    ServerAddress.sin_addr.s_addr = INADDR_ANY;

    if (bind(SocketFileDescriptor, (struct sockaddr*)&ServerAddress, sizeof(ServerAddress)) < 0) {
        perror("ERROR: can't bind socket");
        exit(EXIT_FAILURE);
    }

    if (listen(SocketFileDescriptor, 5) < 0) {
        perror("ERROR: can't listen for connections");
        exit(EXIT_FAILURE);
    }

    printf("-------------------------------------------------\n");
    printf("Success! Server is listening on port %d\n", port);
    printf("-------------------------------------------------\n");

    return SocketFileDescriptor;
}

int ConnectionAccept(int SocketFileDescriptor) {
    int ConnectionFileDescriptor = accept(SocketFileDescriptor, NULL, NULL);

    if (ConnectionFileDescriptor < 0) {
        perror("ERROR: can't accept connection");
        exit(EXIT_FAILURE);
    }

    return ConnectionFileDescriptor;
}

void HandleRRCConnectionRequest(int ConnectionFileDescriptor) {
    uint8_t buffer[BUFFERMAXSIZE];
    ssize_t size = ReceiveMessage(ConnectionFileDescriptor, buffer, sizeof(buffer));
    RRCConnectionRequest_t* RRCRequest = NULL;
    asn_dec_rval_t DecodeTry = asn_decode(NULL, ATS_DER, &asn_DEF_RRCConnectionRequest, (void**)&RRCRequest, buffer, size);

    if (DecodeTry.code != RC_OK) {
        fprintf(stderr, "ERROR: can't decode RRC Connection Request\n");
        close(ConnectionFileDescriptor);
        exit(EXIT_FAILURE);
    }

    printf("\nSuccess! RRC Connection Request received\n");
    ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, RRCRequest);
}

void SendRRCConnectionSetup(int ConnectionFileDescriptor) {
    RRCConnectionSetup_t RRCSetup;
    memset(&RRCSetup, 0, sizeof(RRCConnectionSetup_t));
    RRCSetup.rrc_TransactionIdentifier = 1;
    RRCSetup.criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    RRCSetup.criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;
    uint8_t buffer[BUFFERMAXSIZE];
    asn_enc_rval_t EncodeTry = der_encode_to_buffer(&asn_DEF_RRCConnectionSetup, &RRCSetup, buffer, sizeof(buffer));

    if (EncodeTry.encoded < 0) {
        fprintf(stderr, "ERROR: can't encode RRC Connection Setup\n");
        close(ConnectionFileDescriptor);
        exit(EXIT_FAILURE);
    }

    SendMessage(ConnectionFileDescriptor, buffer, EncodeTry.encoded);

    printf("\nSuccess! RRC Connection Setup sent\n");
}

void HandleRRCConnectionSetupComplete(int ConnectionFileDescriptor, int ClientCounter) {
    uint8_t buffer[BUFFERMAXSIZE];
    ssize_t size = ReceiveMessage(ConnectionFileDescriptor, buffer, sizeof(buffer));
    RRCConnectionSetupComplete_t* RRCSetupComplete = NULL;
    asn_dec_rval_t DecodeTry = asn_decode(NULL, ATS_DER, &asn_DEF_RRCConnectionSetupComplete, (void**)&RRCSetupComplete, buffer, size);

    if (DecodeTry.code != RC_OK) {
        fprintf(stderr, "ERROR: can't decode RRC Connection Setup Complete\n");
        close(ConnectionFileDescriptor);
        exit(EXIT_FAILURE);
    }

    printf("\nSuccess! RRC Connection Setup Complete received\n");
    printf("\nClient #%d\n", ClientCounter);

    ASN_STRUCT_FREE(asn_DEF_RRCConnectionSetupComplete, RRCSetupComplete);
}