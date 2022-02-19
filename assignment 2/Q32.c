/*
Q32.The bubble sort is another technique for sorting an array. A bubble sort compares adjacent array
    elements and exchanges their values if they are out of order. In this way, the smaller values ”bubble“
    to the top of the array (toward element 0), while the larger values sink to the bottom of the array. After
    the first pass of a bubble sort, the last array element is in the correct position; after the second pass
    the last two elements are correct, and so on. Thus, after each pass, the unsorted portion of the array
    contains one less element. Write and test a function that implements this sorting method.
*/
#include <stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];    
                a[j+1]=temp;    
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
/*
Output:
Enter the number of elements in the array
5
Enter the elements of the array
5
4
3
2
1
The sorted array is
1
2
3
4
5
*/