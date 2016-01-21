#ifndef SOCKET_HANDLER_H
#define SOCKET_HANDLER_H

#include <set>
#include <string>

using namespace std;

class Socket;

class SocketHandler {
public:
    static void runLoop();
    static void insertSocket(Socket *s);
    static void eraseSocket(Socket *s);
private:
    static set<Socket *> sockets;
    static bool alreadyRunning;
};

#endif
