/*
Q1.a Develop a C code to create a chain of n = 5 processes by calling fork() in a loop as per the
below structures. Display the process ID, parent ID and return value of fork() in the order 1,
2, 3, 4, and 5. Modify the code to print the process ID and parent ID such that each child will be
completed before it’s parent terminate. The value of n will be given from command-line.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc,char *argv[]){
    int i,n,pid,ppid;
    n=atoi(argv[1]);
    for(i=0;i<n;i++){
        pid=fork();
        if(pid==0){
            printf("\nProcess ID: %d\n",getpid());
            printf("Parent ID: %d\n",getppid());
            printf("Return value of fork(): %d\n",pid);
            printf("-------------------\n");
            exit(0);
        }
    }
    return 0;
}