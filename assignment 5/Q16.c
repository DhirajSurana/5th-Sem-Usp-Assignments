/*
Q16. Some unconditional fork is used in the below written code. Try to predict output of the program.
#include <stdio.h>
#include <unistd.h>
int main()
{
fork();
fork() && fork() || fork();
fork();
printf("Really Interesting!!!\n");
sleep(2);
return 0;
}
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
fork();
fork() && fork() || fork();
fork();
printf("Really Interesting!!!\n");
sleep(2);
return 0;
}