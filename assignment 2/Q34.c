/*
Q34.Implement the following algorithm for linear search that sets a flag (for loop control) when the element
    being tested matches the target. Create a user-defined function with prototype int linear search(const int arr[ ],
    int target, int n); in your program to search the target element.
*/
#include <stdio.h>
int linear_search(const int arr[ ],int target, int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int len,target;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter the elements of the array:\n ");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    int index = linear_search(arr, target, len);
    if(index==-1){
        printf("Target not found\n");
    }
    else{
        printf("Target found at index %d\n", index);
    }
    return 0;
}
/*
Output:
Enter the length of the array: 6
Enter the elements of the array:
1
2
3
4
56
6
Enter the target: 6
Target found at index 5
*/