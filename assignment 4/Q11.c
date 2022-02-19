/*
Q11. Write a C program to output the contents of the current environment list using the external variable
environ that points to the process environment list when the process begin executing.
*/
#include<stdio.h>
int main(int argc, char *argv[], char * environ[])
{
    int i;
    for (i = 0; environ[i] != NULL; i++)
        printf("\n%s", environ[i]);
    getchar();
    return 0;
}