/*
Q30.Write a program to copy the distinct elements of an int type array to another int type array. For
    example, if the input array is 4 7 7 3 2 5 5 then the output array will be 4 7 3 2 5.
*/
#include <stdio.h>
int main(){
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter the elements of the array: ");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    int distinct[len];
    int distinct_len = 0;
    for(int i=0; i<len; i++){
        int flag = 0;
        for(int j=0; j<distinct_len; j++){
            if(arr[i] == distinct[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            distinct[distinct_len] = arr[i];
            distinct_len++;
        }
    }
    printf("The distinct elements of the array are: ");
    for(int i=0; i<distinct_len; i++){
        printf("%d ", distinct[i]);
    }
    return 0;
}
/*
Output:
Enter the length of the array: 6
Enter the elements of the array: 3
7
7
5
4
2
The distinct elements of the array are: 3 7 5 4 2
*/