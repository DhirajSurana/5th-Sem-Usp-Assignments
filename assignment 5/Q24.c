/*
Q24.What output will be at Line X and Line Y?
#define SIZE 5
int nums[SIZE] = { 0,1,2,3,4 } ;
int main()
{
int i;
pid t pid;
pid = fork();
if (pid == 0) {
for (i = 0; i < SIZE; i++) {
nums[i] *= nums[i] *-i;
printf("CHILD:%d ",nums[i]);
}
}
else if (pid > 0) {
wait(NULL);
for (i = 0; i < SIZE; i++)
printf("PARENT: %d ",nums[i]);
}
return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#define SIZE 5
int nums[SIZE] = { 0,1,2,3,4 } ;
int main()
{
int i;
pid_t pid;
pid = fork();
if (pid == 0) {
for (i = 0; i < SIZE; i++) {
nums[i] *= nums[i] *-i;
printf("CHILD:%d\n",nums[i]);
}
}
else if (pid > 0) {
wait(NULL);
for (i = 0; i < SIZE; i++)
printf("PARENT: %d \n",nums[i]);
}
return 0;
}