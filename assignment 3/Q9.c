/*
Q9. Write the C statement to declare and initialize the pointer variable for the given structure and display
    the array content using pointer.
*/
#include <stdio.h>
int main(){
    int a[6] = {120,502,118,188,106,447};
    int *p=a;
    for(int i=0;i<6;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}