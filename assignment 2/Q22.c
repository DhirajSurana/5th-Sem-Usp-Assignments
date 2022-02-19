/*
Write a program in C to add numbers using function via call by reference.
Sample run
Input the first number : 5
Input the second number : 6
The sum of 5 and 6 is 11
*/
#include <stdio.h>
int add(int *x, int *y)
{   
    int c;
    c= *x + *y;
    return c;
}
int main(){
    int a,b,sum;
    printf("Input the first number : ");
    scanf("%d",&a);
    printf("Input the second number : ");
    scanf("%d",&b);
    sum=add(&a,&b);
    printf("The sum of %d and %d is %d \n",a,b,sum);
    return 0;
}
/*
Output:
Input the first number : 6
Input the second number : 7
The sum of 6 and 7 is 13 
*/