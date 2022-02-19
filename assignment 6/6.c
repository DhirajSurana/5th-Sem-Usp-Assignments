/*
Q6. Consider the given code snippet to generate few fd values. If the fds are printed only odd values, then
state the answers for even fds and draw the schematic diagram of the process file table descriptor.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
FILE *myfp;
int fd,i;
for(i=0;i<16;i++){
fd=open("anyExistingFilename",O_RDONLY);
if(fd==-1){
perror("Opening error");
return 1;
}
printf("FD number=%d\n",fd);
myfp=fopen("anyExistingFilewname","r");
if(myfp==NULL){
printf("File opening error");
return 2;
}
}
return 0;
}
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
FILE *myfp;
int fd,i;
for(i=0;i<16;i++){
fd=open("anyExistingFilename",O_RDONLY);
if(fd==-1){
perror("Opening error");
return 1;
}
printf("FD number=%d\n",fd);
myfp=fopen("anyExistingFilewname","r");
if(myfp==NULL){
printf("File opening error");
return 2;
}
}
return 0;
}