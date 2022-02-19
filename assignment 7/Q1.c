/*
Q1. Write a C program in which the original process will create a pipe before forking a child. The parent
process then writes a string to the pipe and prints a message to standard error and the child process
will read the string from the pipe and then prints to standard error.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
int main()
{
    int fd[2];
    pid_t pid;
    char str[] = "Hello World";
    fprintf(stderr, "from parent process : %s\n", str);
    if (pipe(fd) == -1)
    {
        perror("pipe");
        exit(EXIT_FAILURE);
    }
    pid = fork();
    if (pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (pid)
    {
        close(fd[0]);
        write(fd[1], str, sizeof(str));
        close(fd[1]);
    }
    else
    {
        close(fd[1]);
        read(fd[0], str, sizeof(str));
        fprintf(stderr, "from child process : %s\n", str);
        close(fd[0]);
    }
    return 0;
}