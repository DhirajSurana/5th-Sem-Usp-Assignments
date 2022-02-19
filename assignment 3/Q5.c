/*
Q5. Declare the two arrays to hold the values as shown in the given rectangular boxes. Write the equivalent
    C statement to print their values and addresses through pointer.
*/
#include <stdio.h>
int main(){
    int arr1[5]={10,13,20,33,44};
    double arr2[5]={10.5,13.5,20.5,33.5,44.5};
    int *ptr1=arr1;
    printf("Array 1 values and addresses are:\n");
    for(int i=0;i<5;i++){
        printf("%d\t %p \n",*(ptr1+i),(ptr1+i));
    }
    double *ptr2=arr2;
    printf("\nArray 1 values and addresses are:\n");
    for(int i=0;i<5;i++){
        printf("%lf\t %p\n",*(ptr2+i),(ptr2+i));
    }
    return 0;
}