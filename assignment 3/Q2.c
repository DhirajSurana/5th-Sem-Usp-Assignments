/*
Q2. Declare and initialize the string using array reference and pointer.
*/
#include <stdio.h>
int main(){
    char str[10]="hello";
    char *ptr=str;
    for(int i=0;i<10;i++){
        printf("%c",*(ptr+i));
    }
    return 0;
}