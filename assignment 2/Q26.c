/*
Q26.Create a program to compute the mean and standard deviation of an array of data given below and
    displays the difference between each value and the mean.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double mean,sum,sd;
    printf("Enter the length of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    mean=sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(pow(arr[i]-mean,2));
    }
    sum=sqrt(sum/n);
    sd=sum-pow(mean,2);
    printf("The mean is %f",mean);
    printf("The standard deviation is %f",sd);
    return 0;
}
/*
output:
Enter the length of the array 5
Enter the elements of the array 1 2 3 4 5
The mean is 3.000000
The standard deviation is 2.500000
*/

