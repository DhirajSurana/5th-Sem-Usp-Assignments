/*
Q10.Write the C statement to declare and initialize the pointer variable for the given structure and display
    the array content using pointer.
*/
#include <stdio.h>
int main(){
    char a[] ="sabcd";
    char *p=a;
    while(*p!='\0'){    //while loop to print the array 
    printf("%c",*p);
    p++;
    }
    printf("\n");
    return 0;
}