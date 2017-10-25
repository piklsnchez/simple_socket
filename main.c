#include "socket.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
  struct socket* sock = socket_new();
  sock->sConnect(sock, argv[1], atoi(argv[2]));
  sock->sWrite(sock, argv[3]);
  puts(sock->sRead(sock));
  sock->delete(sock);
}
