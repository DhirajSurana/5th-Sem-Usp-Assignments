/*
Q5. Create C program to prepare a ring of single process that will connect the standard output of a process
to its standard input through a pipe. The process will write a value of i to stdout, then read a value
from stdin and store in variable j, then display value of j in stderr.
*/
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

int main()
{
    int fd[2] = {0, 1}; // 0->read,1->write
    pid_t pid;
    int i, j;
    if (pipe(fd) == -1)
    {
        perror("Failed to create the pipe");
        return 1;
    }
    pid = fork();
    if (pid == -1)
    {
        perror("Failed to fork");
        return 2;
    }
    if (pid == 0)
    {
        close(fd[0]);
        printf("Enter the value of i : ");
        scanf("%d", &i);
        write(fd[1], &i, sizeof(i));
        close(fd[1]);
        exit(0);
    }
    else
    {
        close(fd[1]);
        read(fd[0], &j, sizeof(j));
        close(fd[0]);
        fprintf(stderr, "%d\n", j);
    }
    return 0;
}