#include "client.h"

int main() {
    int SocketFileDescriptor = CreateSocketClient("127.0.0.1", 8888);

    SendRRCConnectionRequest(SocketFileDescriptor);
    ReceiveRRCConnectionSetup(SocketFileDescriptor);
    SendRRCConnectionSetupComplete(SocketFileDescriptor);

    close(SocketFileDescriptor);

    return 0;
}