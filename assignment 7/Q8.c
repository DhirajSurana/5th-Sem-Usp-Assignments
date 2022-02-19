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
    if (mkfifo("myfifo", 0666) == -1)
    {
        if (errno != EEXIST)
        {
            perror("mkfifo");
            return 1;
        }

        return 1;
    }
    char str[] = "Hello World";
    int fd = open("myfifo", O_WRONLY);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }
    write(fd, str, sizeof(str));
    close(fd);
    return 0;
}
