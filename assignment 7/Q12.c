/*
Q12. Write the descriptor numbers attached to both parent and child process file descriptor table(PFDT).
Verify the descriptor numbers by exploring the fd folder for the process in the directory proc.
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void)
{
    int fd[2], fs[2], fds[2];
    pid_t pid;
    pipe(fd);
    printf("%ld\n", (long)getpid());
    pid = fork();
    if (pid != 0)
    {
        pipe(fs);
        pipe(fds);
    }
    else
    {
        wait(NULL);
        printf("Parent waits\n");
    }
    getchar();
    return 0;
}