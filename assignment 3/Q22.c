/*
Q22.Write your own versions of the library functions strncpy, strncat, and strncmp which operate
    on at most the first n characters of their argument strings. For example strncpy(s,t,n) copies
    at most n characters of t to s.
*/
#include <stdio.h>
void strncpy(char s[],char t[],int n);
void strncat(char s[],char t[]);
int strncmp(char s[],char t[]);
int  main(){
    char s[100],t[100];
    int n;
    printf("Enter the string s: ");
    gets(s);
    printf("Enter the string t: ");
    gets(t);
    printf("Enter the number of characters to be copied: ");
    scanf("%d",&n);
    strncpy(s,t,n);
    printf("The copied string is:\n%s \n",s);
    strncat(s,t);
    printf("The concatenated string is:\n%s \n",s);
    int r=strncmp(s,t);
    if(r==0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");
    return 0;
}
void strncpy(char s[],char t[] ,int n){
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<n && t[j]!='\0';j++,i++)
        s[i]=t[j];
    s[i]='\0';
}
int strcmp(char s[],char t[]){
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
        if(s[i]!=t[j])
            return 0;
    return 1;
}
void strncat(char s[],char t[]){
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
        s[i]=t[j];
    s[i]='\0';
}
