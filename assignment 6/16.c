/*
Q16. The below given code demonstrate to observe the list of descriptors opened for a process. The given
code conatins a scanf(‘‘%d’’,&var) before the last return 0; statement. Compile and run
the code, but do not supply any value for the scanf(). At this point the code will be a blocking read.
Now open a new terminal and run the command ls /proc/PID/fd, where PID is the process ID
of your process running and has printed on the blocking read terminal.
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<errno.h>
int main()
{
int fd,var;
printf("PID=%ld\n",(long)getpid());
fd=open("read.c",O_RDONLY);
scanf("%d",&var);
return 0;
}