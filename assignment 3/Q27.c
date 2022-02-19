/*
Q27.Write a program to check a string is palindrome or not. For example, madam is a palindrome,
    computer is not a palindrome.   
*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j,n;
    printf("Enter the string\n");
    scanf("%s",str);
    n=strlen(str);
    for(i=0,j=n-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}