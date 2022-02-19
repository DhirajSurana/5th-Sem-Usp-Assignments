/*
Q12. Predict the output of the below code;
#include <stdio.h>
#include <unistd.h>
int main()
{
fork() && fork();
printf("Really Interesting!!!\n");
sleep(2);
return 0;
}
*/
#include <stdio.h>
#include <unistd.h>
int main()
{
fork() && fork();
printf("Really Interesting!!!\n");
sleep(2);
return 0;
}
