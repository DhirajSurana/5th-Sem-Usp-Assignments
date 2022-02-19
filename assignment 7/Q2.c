/*
Q2. State the number of file descriptors will be opened for the below given code. Can you able to show
the file descriptors in your machine?
*/
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main(void)
{
    int fd[2], fs[2], fds[2];
    if (pipe(fd) == -1)
    {
        perror("Failed to create the pipe");
        return 1;
    }
    if (pipe(fs) == -1)
    {
        perror("Failed to create the pipe");
        return 2;
    }
    if (pipe(fds) == -1)
    {
        perror("Failed to create the pipe");
        return 3;
    }
    printf("The number of file descriptors opened are : %d\n", 6);
    printf("the file descriptors are : %d %d \n", fd[0], fd[1]);
    printf("the file descriptors are : %d %d \n", fs[0], fs[1]);
    printf("the file descriptors are : %d %d \n", fds[0], fds[1]);
    return 0;
}