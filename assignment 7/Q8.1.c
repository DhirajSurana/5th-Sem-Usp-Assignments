/*
Q8. Write a C code to create a FIFO and put a string on the FIFO. Now create another C code to read the
content present in the FIFO and then unlink the FIFO file.
*/
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    char str[100];
    int fd = open("myfifo", O_RDONLY);
    read(fd, str, sizeof(str));
    printf("%s\n", str);
    close(fd);
    unlink("myfifo");
    return 0;
}