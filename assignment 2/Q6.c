/*
Q6.Write the C statement to declare and initialize the pointer variable for the given structure.
*/
#include <stdio.h>
int main(){
    int x=89;
    int *p1,*p2,*p3;
    p1=&x;
    p2=&x;
    p3=&x;
    printf(" p1=%p \n",p1);
    printf(" p2=%p \n",p2);
    printf(" p3=%p \n",p3);
    return 0;
}
/*
Output:
p1=0x7ffd7bcece6c
p2=0x7ffd7bcece6c
p3=0x7ffd7bcece6c
*/