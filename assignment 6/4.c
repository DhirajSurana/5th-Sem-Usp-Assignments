/*
Q4. Guess the output of the below code snippet.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
FILE *myfp,*fp;
int fd;
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
myfp=fopen("swap.c","w");
fp=fopen("swap.c","w");
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
return 0;
}
Are you getting any deviation in printing the file descriptor sequence numbers? Why it is happening?
State your answer.
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
FILE *myfp,*fp;
int fd;
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
myfp=fopen("swap.c","w");
fp=fopen("swap.c","w");
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
fd=open("read.c",O_WRONLY);
printf("File descriptor number=%d\n",fd);
return 0;
}