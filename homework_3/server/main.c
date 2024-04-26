#include "server.h"

int main() {
    int ClientCounter = 0;
    while (1) {
        int SocketFileDescriptor = CreateSocketServer(8888);
        int ConnectionFileDescriptor = ConnectionAccept(SocketFileDescriptor);

        HandleRRCConnectionRequest(ConnectionFileDescriptor);
        SendRRCConnectionSetup(ConnectionFileDescriptor);
        HandleRRCConnectionSetupComplete(ConnectionFileDescriptor, ++ClientCounter);

        close(ConnectionFileDescriptor);
        close(SocketFileDescriptor);
    }

    return 0;
}