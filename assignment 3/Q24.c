/*
Q24.Complete function trim blanks(...) whose purpose is to take a single string input parameter
    (to trim ) and return a copy of the string with leading and trailing blanks removed. Use strncpy
    in trim blanks.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    char str1[20];
    printf("Enter the string: ");
    scanf("%s",str);
    int i,j,k;
    for(i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            break;
        }
    }
    for(j=i;j<strlen(str);j++){
        if(str[j]!=' '){
            break;
        }
    }
    strncpy(str1,str+i,j-i+1);
    printf("%s\n",str1);
    return 0;
}