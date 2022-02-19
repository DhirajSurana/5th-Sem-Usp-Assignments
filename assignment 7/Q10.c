/*
Q10. Write the number of file descriptors will be opened for the following code snippet. Verify the descrip-
tor numbers by exploring the fd folder for the process in the directory proc.
*/
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
int main(void)
{
    int fd[2], fs[2], fds[2];
    pipe(fd);
    pipe(fs);
    pipe(fds);
    printf("%ld\n", (long)getpid());
    getchar();
    return 0;
}