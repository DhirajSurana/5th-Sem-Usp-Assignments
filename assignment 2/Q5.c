/*
Q5.Write the C statement to declare and initialize the pointer variable for the given structure.
*/
#include <stdio.h>
double main(){
   double x=45,y=12,z=23;
    double *p;
    p=&x;
    printf("x= %0.2lf\n",*p);
    p=&y;
    printf("y= %0.2lf\n",*p);
    p=&z;
    printf("z= %0.2lf\n",*p);
    return 0;
}
/*
OUTPUT:
x= 45.00
y= 12.00
z= 23.00
*/