/*
Q14. Write the descriptor numbers attached to the process file descriptor table(PFDT). Verify the descriptor
numbers by exploring the fd folder for the process in the directory proc. Let make a note to the size
of the array fd[6], does it affect the file descriptor table entry. Do more possible choice on the size of
array and conclude why the size of the array fd is 2.
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    int fd[6], r;
    r = pipe(fd);
    if (r == -1)
    {
        printf("Pipe create error\n");
        return 1;
    }
    printf("%ld\n", (long)getpid());
    while (1)
        ;
    return 0;
}