/*
Q28.Write a program in C to input a string using getchar() function only (Do not use scanf() or
    gets() function) and then count_alpha the total number of alphabets, number of alphabets in uppercase,
    number of alphabets in lowercase, number of digits, number of punctuation symbols, and number of
    spaces using character library functions.

    sample run:
    Input a string: I’m 2 bz 4 now.
    Total number of alphabets: 7
    Number of uppercase alphabets: 1
    Number of lowercase alphabets: 6
    Number of digits: 2
    Number of punctuation mark: 2
    Number of spaces: 4
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char flag='a';
    int i=0;
    printf("Enter the string\n");
    while(flag!='\n'){
        str[i]=getchar();
        if(str[i]=='\n'){
            flag='\n';
        }
        i++;
    }
    str[i-1]='\0';
    int alphabets=0,uppercase=0,lowercase=0,digits=0,punctuation=0,spaces=0;
    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            if(isupper(str[i])){
                uppercase++;
            }
            else{
                lowercase++;
            }
            alphabets++;
        }
        else if(isdigit(str[i])){
            digits++;
        }
        else if(ispunct(str[i])){
            punctuation++;
        }
        else if(isspace(str[i])){
            spaces++;
        }
    }
    printf("Total number of alphabets: %d\n",alphabets);
    printf("Number of uppercase alphabets: %d\n",uppercase);
    printf("Number of lowercase alphabets: %d\n",lowercase);
    printf("Number of digits: %d\n",digits);
    printf("Number of punctuation mark: %d\n",punctuation);
    printf("Number of spaces: %d\n",spaces);
    return 0;
}