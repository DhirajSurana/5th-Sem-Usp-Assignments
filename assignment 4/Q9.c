/*
Q9. Write the C code for question numbers 3, 4, 5,and 6 using strtok r() library function. The
    function prototype for strtok(), and strtok r() given as follows; 

    #include <string.h>
    char *strtok(char *str, const char *delim);
    char *strtok_r(char *str, const char *delim, char **saveptr);
    The strtok() and strtok_r() functions return a pointer to the
    next token, or NULL if there are no more tokens.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[] ="ITER:IBCS;SOA:Pot*Hot";
    char* token;
    char *last;
    token=strtok_r(str,":;*",&last);
    while (token!=NULL){
        printf("Token=%s\n",token);
        token=strtok_r(NULL,":;*",&last);
    }
    return 0;
}
