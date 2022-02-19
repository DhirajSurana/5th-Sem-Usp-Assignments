/*
Q11.Two pointers are pointing to different variable. Write the C statement to find the greater between
    a, and b through pointer manipulation.
*/
#include <stdio.h>
int main(){
    int a=52;
    int b=18;
    int *ptr1=&a;
    int *ptr2=&b;
    int greater;
    if(*ptr1>*ptr2){
        greater=*ptr1;
    }
    else{
        greater=*ptr2;
    }printf("a=%d, b=%d, greater=%d\n",a,b,greater);
    return 0;
}
/*
output:
a=52, b=18, greater=52
*/