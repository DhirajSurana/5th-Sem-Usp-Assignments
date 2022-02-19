/*
Q7. Write a C program to create a ring of two processes. Initialize the value of two variables i,j in original
process. Parent process will update the value of i and pass the updated value of i to child process
through pipe. Similarly child process will updtae the value of j and pass the updated value of j to
parent process through pipe. Both the processes will display their corresponding value of i, j through
stderr.
*/
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
    int fd[2];  // parent c->p child read close and parent write close
    int fd2[2]; //child p->c parent read close and child write close
    int i,j;
    pid_t pid;
    printf("Enter the value of i\n");
    scanf("%d",&i);
    printf("Enter the value of j\n");
    scanf("%d",&j);
    if(pipe(fd)==-1){
        perror("pipe");
        return 1;
    }
    if(pipe(fd2)==-1){
        perror("pipe");
        return 1;
    }
    pid=fork();
    if(pid==-1){
        perror("fork");
        return 1;
    }
    if(pid==0){
        j+=2;
        close(fd[0]);
        close(fd2[1]);
        write(fd[1],&j,sizeof(j));
        read(fd2[0],&i,sizeof(i));
        fprintf(stderr,"Child process: i=%d,j=%d\n",i,j);
    }
    else{
        //parent read close and child write close
        i++;
        close(fd[1]);
        close(fd2[0]);
        read(fd[0],&j,sizeof(j));
        write(fd2[1],&i,sizeof(i));
        fprintf(stderr,"Parent process: i=%d,j=%d\n",i,j);
    }
    return 0;
}