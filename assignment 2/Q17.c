/*
Q17. The following code fragment is from a function preparing to call sum_n_avg (see question-15).
     Complete the function call statement.

     {
        double one, two, three, sum_of_3, avg_of_3;
        printf("Enter three numbers> ");
        scanf("%lf%lf%lf", &one, &two, &three);
        sum_n_avg(_____________________);
        ....
    }    
*/
#include <stdio.h>
void sum_n_avg(double one, double two, double three, double *sum_of_3, double *avg_of_3){
    *sum_of_3 = one + two + three;
    *avg_of_3 = *sum_of_3 / 3;
}
int main(){
    double one, two, three, sum_of_3, avg_of_3;
    printf("Enter three numbers> \n");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one,two,three,&sum_of_3,&avg_of_3);
    printf("Sum of three numbers is %.2lf\n", sum_of_3);
    printf("Average of three numbers is %.2lf\n", avg_of_3);
    return 0;
}
/*
Output:
Enter three numbers> 
5
6
6
Sum of three numbers is 17.00
Average of three numbers is 5.67
*/