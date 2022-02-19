/*
Q1.I. Write the below by putting enter at end of each line
./a.out 12\
34\
56\
78
[NOTE::] A backslash at the end of a line causes the line to be continued. It is a way to present
a verylong line to the shell.
*/
#include <stdio.h>
int main(int argc,char *argv[]){
    printf("\n%d\n",argc);
    return 0;
}