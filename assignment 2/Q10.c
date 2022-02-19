/*
Q10. Declare and initialize the pointer variables.
*/
#include <stdio.h>
int main()
{
    int Ivar=454;
    int *ptr=&Ivar;
    int **Tptr=&ptr;
    printf(" value of Ivar= %d\n",Ivar);
    printf(" Address of Ivar= %p\n",&Ivar);
    printf(" value of ptr= %p\n",ptr);
    printf(" Address of ptr= %p\n",&ptr);
    printf(" value of Tptr= %p\n",Tptr);
    return 0;   
}
/*
output:
value of Ivar= 454
Address of Ivar= 0x7ffcb10a2c24
value of ptr= 0x7ffcb10a2c24
Address of ptr= 0x7ffcb10a2c28
value of Tptr= 0x7ffcb10a2c28
*/    