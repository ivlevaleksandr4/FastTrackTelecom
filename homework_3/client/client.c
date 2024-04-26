#include "client.h"

const int BUFFERMAXSIZE = 1024;

int CreateSocketClient(const char* IpServer, int PortServer) {
    int SocketFileDescriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);
    if (SocketFileDescriptor < 0) {
        perror("ERROR: can't create socket");
        exit(EXIT_FAILURE);
    }

    struct sockaddr_in ServerAddress;
    memset(&ServerAddress, 0, sizeof(ServerAddress));
    ServerAddress.sin_family = AF_INET;
    ServerAddress.sin_port = htons(PortServer);

    if (inet_pton(AF_INET, IpServer, &ServerAddress.sin_addr) <= 0) {
        perror("ERROR: invalid address");
        exit(EXIT_FAILURE);
    }

    if (connect(SocketFileDescriptor, (struct sockaddr*)&ServerAddress, sizeof(ServerAddress)) < 0) {
        perror("ERROR: can't connect to server");
        exit(EXIT_FAILURE);
    }

    return SocketFileDescriptor;
}


ssize_t SendMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size) {
    ssize_t SendTry = send(SocketFileDescriptor, buffer, size, 0);

    if (SendTry < 0) {
        perror("ERROR: can't send message");
        exit(EXIT_FAILURE);
    }

    return SendTry;
}

ssize_t ReceiveMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size) {
    ssize_t ReceiveTry = recv(SocketFileDescriptor, buffer, size, 0);

    if (size < 0) {
        perror("ERROR: can't receive message");
        exit(EXIT_FAILURE);
    }

    return ReceiveTry;
}

void SendRRCConnectionRequest(int SocketFileDescriptor) {
    RRCConnectionRequest_t RRCRequest;
    memset(&RRCRequest, 0, sizeof(RRCConnectionRequest_t));

    RRCRequest.criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;
    RRCRequest.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_randomValue;

    uint8_t buffer[BUFFERMAXSIZE];
    asn_enc_rval_t EncodeTry = der_encode_to_buffer(&asn_DEF_RRCConnectionRequest, &RRCRequest, buffer, sizeof(buffer));
    if (EncodeTry.encoded < 0) {
        fprintf(stderr, "ERROR: can't encode\n");
        exit(EXIT_FAILURE);
    }

    SendMessage(SocketFileDescriptor, buffer, EncodeTry.encoded);
}

void ReceiveRRCConnectionSetup(int SocketFileDescriptor) {
    uint8_t buffer[BUFFERMAXSIZE];
    ssize_t size = ReceiveMessage(SocketFileDescriptor, buffer, sizeof(buffer));
    RRCConnectionSetup_t* RRCSetup = NULL;
    asn_dec_rval_t DecodeTry = asn_decode(NULL, ATS_DER, &asn_DEF_RRCConnectionSetup, (void**)&RRCSetup, buffer, size);

    if (DecodeTry.code != RC_OK) {
        fprintf(stderr, "ERROR: can't decode\n");
        close(SocketFileDescriptor);
        exit(EXIT_FAILURE);
    }
    printf("Success! RRC Connection Setup received\n");
}

void SendRRCConnectionSetupComplete(int SocketFileDescriptor) {
    uint8_t buffer[BUFFERMAXSIZE];
    RRCConnectionSetupComplete_t RRCSetupComplete;
    memset(&RRCSetupComplete, 0, sizeof(RRCConnectionSetupComplete_t));
    RRCSetupComplete.rrc_TransactionIdentifier = 1;
    RRCSetupComplete.criticalExtensions.present = RRCConnectionSetupComplete__criticalExtensions_PR_c1;
    RRCSetupComplete.criticalExtensions.choice.c1.present = RRCConnectionSetupComplete__criticalExtensions__c1_PR_rrcConnectionSetupComplete_r8;
    asn_enc_rval_t EncodeComplete = der_encode_to_buffer(&asn_DEF_RRCConnectionSetupComplete, &RRCSetupComplete, buffer, sizeof(buffer));

    if (EncodeComplete.encoded < 0) {
        fprintf(stderr, "ERROR: can't encode\n");
        exit(EXIT_FAILURE);
    }

    SendMessage(SocketFileDescriptor, buffer, EncodeComplete.encoded);
}