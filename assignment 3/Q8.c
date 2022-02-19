/*
Q8. Write the C statement to declare and initialize the pointer variable for the given structure and display
    the array content using pointer.
*/
#include <stdio.h>
int main(){
    double a[6] = {1.2,5.2,1.8,1.8,1.6,4.7};
    double *p1=a;
    printf("%lf\n",*p1);
    double *p2=a+1;
    printf("%lf\n",*p2);
    double *p3=a+2;
    printf("%lf\n",*p3);
    double *p4=a+3;
    printf("%lf\n",*p4);
    double *p5=a+4;
    printf("%lf\n",*p5);
    double *p6=a+5;
    printf("%lf\n",*p6);
    return 0;
}