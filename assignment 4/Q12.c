/*
Q12.Write a C program to get the value of the environment variables; PWD, HOME, LOGNAME, USER,
PATH, and COLORTERM etc. using getenv() function.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("%s\n",getenv("PWD"));
    printf("%s\n",getenv("HOME"));
    printf("%s\n",getenv("LOGNAME"));
    printf("%s\n",getenv("USER"));
    printf("%s\n",getenv("PATH"));
    printf("%s\n",getenv("COLORTERM"));
    return 0;
}