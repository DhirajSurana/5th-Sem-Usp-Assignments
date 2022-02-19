/*
Q5. For example, given the string TOC;;PLC,USP;, use successive calls to strtok() to get the token
of strings ”TOC”, ”PLC”, and ”USP”, and then a NULL pointer.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
    char str[] ="TOC;;PLC;USP;";
    char* token;
    token=strtok(str,";");
    while (token!=NULL){
    printf("Token=%s\n",token);
    token=strtok(NULL,";");
    }
    printf("%p\n",token);
    return 0;
}