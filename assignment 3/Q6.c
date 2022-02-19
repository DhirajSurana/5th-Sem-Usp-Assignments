/*
Q6. Declare and initialize the two arrays to hold the values as shown in the given rectangular boxes. Write
    the equivalent C statement to print their values and addresses using pointer.
*/
#include <stdio.h>
int main(){
    char arr1[5]={'I','B','C','S','\0'};
    char arr2[5]={'S','O','A','D','U'};
    char *ptr=arr1;
    printf("Array 1 values and addresses are:\n");
    while (*ptr!='\0'){
         printf("%c\t%p\n",*ptr,ptr);
         ptr++;
    }
    ptr=arr2;
    printf("Array 2 values and addresses are:\n");
    for(int i=0;i<5;i++){
        printf("%c\t%p\n",*(ptr+i),(ptr+i));
    }
    return 0;
}