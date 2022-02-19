/* 
Q24.Write a program in C for a menu driven calculator having 4 functionalities Addition, Subtraction,
    Multiplication and Division. All the functionalities should be implemented in functions which should
    be called via function pointers.
*/
#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    if(b!=0){
        return a/b;
    }
    else{
        printf("\nDivision by zero is not possible");
    }
}
int main(){
    int a,b,c,d;
    int (*ptr)(int,int);
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice: ");
    scanf("%d",&c);
    switch(c){
        case 1:
            ptr=add;
            d=ptr(a,b);
            printf("The sum of %d and %d is %d\n",a,b,d);
            break;
        case 2:
            ptr=sub;
            d=ptr(a,b);
            printf("The difference of %d and %d is %d\n",a,b,d);
            break;  
        case 3: 
            ptr=mul;
            d=ptr(a,b);
            printf("The product of %d and %d is %d\n",a,b,d);
            break;
        case 4:
            ptr=div;
            d=ptr(a,b);
            printf("The quotient of %d and %d is %d\n",a,b,d);
            break;
        default:
            printf("\nInvalid choice");
        }
        return 0;
}
/*
Output:
Enter the first number: 10
Enter the second number: 20
1.Addition
2.Subtraction
3.Multiplication
4.Division
Enter your choice: 1
The sum of 10 and 20 is 30
*/


