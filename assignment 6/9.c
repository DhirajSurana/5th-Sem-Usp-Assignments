/*
Q9. Write a program to open a new file in write mode and do the followings;
(a) Write the some text in the file and save it.
(b) Copy the content in another file.
(c) Print the file descriptor of both the files and give the justification of such fds.
*/
#include<stdio.h>
#include<fcntl.h>
#include<error.h>
int main(){
    int fd1=open("input.txt",O_WRONLY);
    if(fd1==-1){
        perror("Open error");
        return 1;
    }
    int fd2=open("output.txt",O_WRONLY|O_CREAT);
    if(fd2==-1){
        perror("Open error");
        return 1;
    }
    char *ch="Hello World";
    write(fd1,ch,sizeof(ch));
    char ch1;
    while((ch1=fgetc(fd1))!=EOF){
        write(fd2,ch1,1);
    }
    close(fd1);
    close(fd2);
    return 0;
}