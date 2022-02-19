/*
Q4. Create a program to display the address and value of each element of the given integer array a. Also
    perform a close observation on the format of the address and the change of address from index 0 to
    the last index of the array.
*/
#include <stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        printf("Value of a[%d] = %d\t Address of a[%d] = %p\n",i,a[i],i,&a[i]);
    }
    return 0;
}