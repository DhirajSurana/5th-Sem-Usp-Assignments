/*
Q33.The binary search algorithm that follows may be used to search an array when the elements are in
    sorted order.
*/
#include <stdio.h>
int main()
{
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int a[len];
    printf("Enter the elements of the array:\n ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    int low, high, mid, key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = len - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(key == a[mid])
        {
            printf("%d is found at %d\n", key, mid);
            break;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(low > high)
        printf("%d is not found\n", key);
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
5
6
Enter the key to be searched: 8
8 is not found
*/

