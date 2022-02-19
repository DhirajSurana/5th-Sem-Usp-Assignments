/*
Q2. Write a ’C’ program that uses the C library function strtok() to split a string into tokens and
also display the number of tokens. Type the command man 3 strtok to get the description of the
library function. The strtok() functions return a pointer to the next token, or NULL if there are no
more tokens.[ NOTE:: The first call to strtok is different from subsequent calls. On the first call,
pass the address of the string to parse as the first argument. On subsequent calls for parsing the same
string, pass a NULL for the first argument. The second argument to strtok, is a string of allowed
token delimiters]. Each successive call to strtok returns the start of the next token and inserts a
’\0’ at the end of the token being returned. The strtok function returns NULL when it reaches the
end of the string to be parsed. Sample inputted string: (1) ITER-IBCS-SOA-IDS-SUM-CSE (ii) iter
ibcs soa ids sum
*/
#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    char str[70];
    printf("Enter the string\n");
    scanf("%s",str);
    char *token;
    int count=0;
    token=strtok(str,"-");
    //token=strok(str," ");
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL,"-");
        //token=strtok(NULL," ");
        count++;
    }
    printf("%d\n",count);
    return 0;
}