/*
Q6. Write your C code to simulate the shell command man ls | grep ls | wc -l to count the
number of times ls present in the manual page.
/usr/share/man/man1/ls.1.gz
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    int fd = open("/usr/share/man/man1/ls.1.gz", O_RDONLY);
    int count;
    char ch[50];
    while ((gets()) != EOF)
    {
        {
            count++;
        }
    }
    printf("the no of lines in man page of ls : %d", count);
    return 0;
}
