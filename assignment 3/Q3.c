/*
Q3. Write a program to read a string from the keyboard and print each character with their address on the
    screen.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    char *ptr=name;
    printf("Enter your name: ");
    gets(name);
    printf("\nYour name is:\n");
    while(*ptr != '\0'){
        printf("%c  %p\n", *ptr,ptr);
        ptr+=1;
    }
return 0;
}    