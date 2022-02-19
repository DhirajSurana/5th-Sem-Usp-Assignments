/*
Q22.Design your program to redirects the standard output to a file dup2test.txt file.
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
int main(){
    int fd=open("dup2test.txt",O_WRONLY|O_CREAT);
    if(fd==-1){
        perror("open error");
        return 1;
    }
    printf("hello world written in file\n");
    int dup2ret=dup2(fd,1);
    printf("hello world");
    close(fd);
    return 0;
}