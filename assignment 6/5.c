/*
Q5. Write a program to open an existing file and do the followings;
(a) Count the number of characters in the file.
(b) Count the number of words in the file.
(c) Count the number of line in the file.
(d) Copy first three lines of a file to another.
*/
#include<stdio.h>
#include<error.h>
#include<fcntl.h>
int main(){
    FILE *f=fopen("read.txt","r");
    if (f==NULL){
        printf("File not found");
    }
    int c=0,w=0,l=0;
    char ch;
    while((ch=fgetc(f))!=EOF){
        c++;
        if(ch==' '||ch=='\n'){
            w++;
        }
        if(ch=='\n'){
            l++;
        }
    }
    printf("Number of characters=%d\n",c);
    printf("Number of words=%d\n",w);
    printf("Number of lines=%d\n",l+1);
    fclose(f);
    return 0;
}
