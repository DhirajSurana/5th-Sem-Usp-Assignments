/*
Q5. Calculate the number of hello will be printed for the below code; Find a manual solution and
formula to compare with the output generated with this code.
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{
printf("hello\n");
fork();
printf("hello\n");
fork();
printf("hello\n");
fork();
printf("hello\n");
sleep(2);
return 0;
}
*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{
printf("hello\n");
fork();
printf("hello\n");
fork();
printf("hello\n");
fork();
printf("hello\n");
sleep(2);
return 0;
}