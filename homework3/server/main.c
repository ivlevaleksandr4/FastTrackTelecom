#include "server.h"

int main() {
    while (1) {
        int SocketFileDescriptor = CreateSocketServer(8888);
        int ConnectionFileDescriptor = ConnectionAccept(SocketFileDescriptor);
        HandleRRCConnectionRequest(ConnectionFileDescriptor);
        SendRRCConnectionSetup(ConnectionFileDescriptor);
        HandleRRCConnectionSetupComplete(ConnectionFileDescriptor);

        close(ConnectionFileDescriptor);
        close(SocketFileDescriptor);
    }

    return 0;
}