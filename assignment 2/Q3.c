/*
 Q3. Declare two integer variable and assign values to them, and print their addresses. Additionally, Swap
     the contents of the variables and print their addresses after swap. State whether the addresses before
     and after are equal or not.
*/
#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int temp;

    printf("Before swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);

    //swap
    temp = a;
    a=b;
    b=temp;

    printf("After swap\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    return 0;
}
/*
Output:
Before swap
a = 10
b = 20
Address of a: 0x7ffe8aade26c
Address of b: 0x7ffe8aade270
After swap
a = 20
b = 10
Address of a: 0x7ffe8aade26c
Address of b: 0x7ffe8aade270
*/