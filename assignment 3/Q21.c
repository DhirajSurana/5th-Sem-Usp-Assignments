/*
Q21.Write a pointer version of string concatenation program using the user-defined function,
    stringconcate(s,t);, copies the string t to the end s.
*/
#include <stdio.h>
void stringconcate(char s[],char t[]){
    int i,j;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++,i++)
        s[i]=t[j];
    s[i]='\0';
}
int main(){
    char s[100],t[100];
    printf("Enter the string s: ");
    gets(s);
    printf("Enter the string t: ");
    gets(t);
    stringconcate(s,t);
    printf("The concatenated string is:\n%s \n",s);
    return 0;
}
