/*
Q18. Change the statement if((childpid=fork())≤ 0) inside the for loop to
if((childpid=fork())≤ 1) in the fan of n processes code. Show how many processes are
created for each value of n. Now modify the program so that you can use ps command to see the
processes that are created. 
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i, n;
if (argc != 2){
fprintf(stderr, "Usage: %s processes\n", argv[0]);
return 1;
}
n = atoi(argv[1]);
for (i = 1; i < n; i++)
if ((childpid = fork()) <= 1)
break;
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",i,(long)getpid(), (long)getppid(), (long)childpid);return 0;
}