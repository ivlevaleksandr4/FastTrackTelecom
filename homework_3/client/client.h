#pragma once

#include "RRCConnectionRequest.h"
#include "RRCConnectionSetup.h"
#include "RRCConnectionSetupComplete.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int CreateSocketClient(const char* IpServer, int PortServer);
ssize_t SendMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size);
ssize_t ReceiveMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size);
void SendRRCConnectionRequest(int SocketFileDescriptor);
void ReceiveRRCConnectionSetup(int SocketFileDescriptor);
void SendRRCConnectionSetupComplete(int SocketFileDescriptor);