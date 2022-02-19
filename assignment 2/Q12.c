/*
Q12.Write the C++ statement to manipulate the value of the variable Ia through the pointers ptr1, ptr2,
    and ptr3.
*/
#include <stdio.h>
int   main(){
    int Ia= 23;
    int *ptr1=&Ia;
    printf("initial value of Ia is %d\n",*ptr1);
    *ptr1+=10;
    printf("value of Ia after 1st change is %d\n",*ptr1);
    int *ptr2=&Ia;
    *ptr1+=15;
    printf("value of Ia after 2nd change is %d\n",*ptr2);
    int *ptr3=&Ia;
    *ptr3+=20;  
    printf("value of Ia after 3rd change is %d\n",*ptr3);
    return 0;
}
/*
Output:
initial value of Ia is 23
value of Ia after 1st change is 33
value of Ia after 2nd change is 48
value of Ia after 3rd change is 68
*/


