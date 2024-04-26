#pragma once

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>
#include <RRCConnectionSetupComplete.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

ssize_t ReceiveMessage(int SocketFileDescriptor, uint8_t* buffer, size_t size);
ssize_t SendMessage(int SocketFileDescriptor, uint8_t* buffer, ssize_t size);
int CreateSocketServer(int port);
int ConnectionAccept(int SocketFileDescriptor);
void HandleRRCConnectionRequest(int ConnectionFileDescriptor);
void SendRRCConnectionSetup(int ConnectionFileDescriptor);
void HandleRRCConnectionSetupComplete(int ConnectionFileDescriptor, int ClientCounter);