/*
Q28.Write a program to declare one array for storing the square roots of the integers from 0 through 10
    and a second array for storing the cubes of the same integers. 
*/
#include <stdio.h>
#include <math.h>
int main(){
    double sq[11],cu[11];
    int i;
    for(i=0;i<=10;i++){
        sq[i]=sqrt(i);
        cu[i]=pow(i,3);
    }
    printf("\nSquare roots of integers from 0 to 10 are:\n");
    for(i=0;i<=10;i++){
        printf("%lf\t",sq[i]);
    }
    printf("\n\nCubes of integers from 0 to 10 are:\n");
    for(i=0;i<=10;i++){
        printf("%lf\t",cu[i]);
    }
    return 0;
}
/*
Output:
Square roots of integers from 0 to 10 are:
0.000000	1.000000	1.414214	1.732051	2.000000	2.236068	2.449490	2.645751	2.828427	3.000000	3.162278
Cubes of integers from 0 to 10 are:
0.000000	1.000000	8.000000	27.000000	64.000000	125.000000	216.000000	343.000000	512.000000	729.000000	1000.000000
*/


