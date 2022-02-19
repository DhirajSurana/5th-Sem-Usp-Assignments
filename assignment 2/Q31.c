/*
Q31.Write a program which uses a user defined function, find_largest() to find the largest element
    of an integer array.
*/
#include <stdio.h>
int find_largest(int arr[],int n){
    int i,max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[10],n,i,max;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=find_largest(arr,n);
    printf("The largest element is: %d\n",max);
    return 0;
}
/*
Output:
Enter the number of elements in the array: 6
Enter the elements of the array: 
1
2
3
4
5
78
The largest element is: 78
*/