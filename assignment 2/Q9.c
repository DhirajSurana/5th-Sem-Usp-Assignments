/*
Q9.Write the C statement to declare and initialize the pointer variable for the given structure and update
   the values of a, b and c to be incremented by 10. 
*/
#include <stdio.h>
double main(){
    int a=12,b=52,c=8;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    printf("before \n");
    printf("value of a=%d \n",*ptr1);
    *ptr1+=10;
    printf("value of b=%d \n",*ptr2);
    *ptr2+=10;
    printf("value of c=%d \n",*ptr3);
    *ptr3+=10;
    printf("after \n");
    printf("value of a=%d \n",*ptr1);
    printf("value of b=%d \n",*ptr2);
    printf("value of c=%d \n",*ptr3);
    return 0;
}
/*
before 
value of a=12
value of b=52
value of c=8
after
value of a=22
value of b=62
value of c=18
*/