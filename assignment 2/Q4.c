/*
Q4.Write the C statement to declare and initialize the pointer variable for the given structure and display
   the values of x, y and z with the help of p.
*/
#include <stdio.h>
int main(){
    int x=45,y=12,z=23;
    int *p;
    p=&x;
    printf("x= %d\n",*p);
    p=&y;
    printf("y= %d\n",*p);
    p=&z;
    printf("z= %d\n",*p);
    return 0;
}
/*
OUTPUT:
x= 45
y= 12
z= 23
*/
