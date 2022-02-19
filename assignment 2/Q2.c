/*
 Q2. For the given structure below, declare the variable type, print their values and addresses
*/
#include <stdio.h>
int main(){
    int Ia=345;
    double Fb=4.5;
    char Chvar='Z';
    printf("%d %lf %c \n",Ia,Fb,Chvar);
    printf("%p %p %p \n",&Ia,&Fb,&Chvar);
    return 0;
}
/* 
Output:
345 4.500000 Z 
0x7ffd73513d6c 0x7ffd73513d70 0x7ffd73513d6b
*/