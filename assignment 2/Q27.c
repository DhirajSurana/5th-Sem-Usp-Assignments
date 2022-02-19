/*
Q27.You have two independent sorted arrays of size m, and n respectively, where m; n > 0. You are
    required to merge the two arrays such that the merged array will be in sorted form and will contain
    exactly m+ n number of elements. You are not allowed to use any kind of sorting algorithm. Design
    your program to meet the above given requirement. Assume the elements of the array are non-negative
    integers. The elements can be read from the keyboard or can be generated randomly.
*/
#include <stdio.h>
int main(){
    int len1,len2;
    printf("Enter the length of the first array: ");
    scanf("%d",&len1);
    int arr1[len1];
    printf("Enter the elements of the first array: ");
    for(int i=0;i<len1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the length of the second array: ");
    scanf("%d",&len2);
    int arr2[len2];
    printf("Enter the elements of the second array: ");
    for(int i=0;i<len2;i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[len1+len2];
    int i=0,j=0,k=0;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<len2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    printf("The merged array is: ");
    for(int i=0;i<len1+len2;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}
/*
output:
Enter the length of the first array: 3
Enter the elements of the first array: 12
20
24
Enter the length of the second array: 4
Enter the elements of the second array: 7
8
65
105
The merged array is: 7 8 12 20 24 65 105 
*/