/*
29. Write a program to use the user-defined function multiply that takes two type int array input
    arguments and their effective size and produces a result array containing the sums of corresponding
    elements. For example, for the three-element input arrays 5 1 7 and 2 4 2 , the result would be an
    array containing 7 3 5 .
*/
#include <stdio.h>
#include <math.h>
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int main(){
    int len1,len2,final_len,carry=0;
    printf("Enter the length of the first digit array: ");
    scanf("%d",&len1);
    printf("Enter the length of the second digit array: ");
    scanf("%d",&len2);
    int a[len1],b[len2];
    printf("Enter the first digit array: ");
    for(int i=0;i<len1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the second digit array: ");
    for(int i=0;i<len2;i++){
        scanf("%d",&b[i]);
    }
    final_len=max(len1,len2)+1;
    int min_len=min(len1,len2);
    int c[final_len];
    for(int i=final_len;i>=min_len;i++){
        c[i]=(a[i]+b[i]+carry)%10;
        carry=a[i]+b[i]>=10?1:0;
    }
    if (carry==1){
        c[0]=1;
    }
    printf("The sum of the two digit arrays is: ");
    for(int i=0;i<final_len;i++){
        printf("%d",c[i]);
    }
    return 0;
}

/*
OUTPUT:
Enter the length of the first digit array: 3
Enter the length of the second digit array: 4
Enter the first digit array: 5 1 7
Enter the second digit array: 2 4 2
The sum of the two digit arrays is: 7 5 9
*/