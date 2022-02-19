/*
Q13.Predict the the values of fd will be printed. Which process(parent/child) is printing the fd values?
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<wait.h>
#include<sys/stat.h>
int main()
{
pid_t pid;
int fd,i,status;
pid=fork();
if(pid==0){
for(i=0;i<5;i++){
fd=open("select.c",O_RDONLY);
printf("FD in child=%d\n",fd);
}
}
if(pid!=waitpid(-1,&status,0)){
for(i=0;i<5;i++){
fd=open("select.c",O_RDONLY);
if(pid==0)
printf("FD in child=%d\n",fd);
else
printf("FD in parent=%d\n",fd);
}
}
return 0;
}