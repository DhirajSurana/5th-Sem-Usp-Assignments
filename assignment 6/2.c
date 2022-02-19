/*
Q2. Run the given sample code to print the file descriptor numbers assigned on open() system call.
int main()
{
int fd,i;
for(i=0;i<10;i++){
fd=open("read.c",O_RDONLY);
if(fd==-1){
perror("Open error");
return 1;
}
sleep(2);
printf("File descriptor Number=%d\n",fd);
}
return 0;
}
Observe that file descriptor numbers are assigned sequentially depending on first unused slot.
*/
#include <stdio.h>
#include <error.h>
#include <fcntl.h>
int main()
{
 int fd,i;
for(i=0;i<10;i++){
fd=open("read.c",O_RDONLY);
if(fd==-1){
 perror("Open error");
return 1;
}
sleep(2);
printf("File descriptor Number=%d\n",fd);
}
return 0;
}