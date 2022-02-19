/*
Q23. Write a program in C to find the maximum and minimum number in an array having 5 elements.
*/
#include <stdio.h>
int min(int *x){
    int i,min=x[0];
    for(i=0;i<5;i++){
        if(x[i]<min)
            min=x[i];
    }
    return min;
}
int max(int *x){
    int i,max=x[0];
    for(i=0;i<5;i++){
        if(x[i]>max)
            max=x[i];
    }
    return max;
}
int main(){
    int a[5],i,max_val,min_val;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("arr[ %d ] : %d",i,&a[i]);
    }
    max_val=max(a);
    min_val=min(a);
    printf("Maximum number is %d\n",max_val);
    printf("Minimum number is %d\n",min_val);
    return 0;
}
/*
Output:
Enter 5 numbers:
5
6
3
8
99
Maximum number is 99
Minimum number is 3
*/