/*
Q8.Write the C statement to declare and initialize the pointer variable for the given structure and update
   the values of a, b and c to be incremented by 10. 
*/
#include <stdio.h>
double main(){
    int a=12,b=25,c=18;
    int *ptr=&a;
    printf("before \n");
    printf("value of a=%d \n",*ptr);
    *ptr+=10;
    ptr=&b;
    printf("value of b=%d \n",*ptr);
    *ptr+=10;
    ptr=&c;
    printf("value of c=%d \n",*ptr);
    *ptr+=10;
    printf("after \n");
    printf("value of a=%d \n",a);
    printf("value of b=%d \n",b);
    printf("value of c=%d \n",c);
    return 0;
}
/*
Output:
before 
value of a=12 
value of b=25 
value of c=18 
after 
value of a=22 
value of b=35 
value of c=28 
*/