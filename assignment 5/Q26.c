/*
Q26. What output will be at Line A?
int value = 5;
int main()
{
pid_t pid;
pid = fork();
if (pid == 0) {
value += 15;
return 0;
}
else if (pid > 0) {
wait(NULL);
printf("PARENT: value= %d",value);
return 0;
}
// LINE A
}
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int value = 5;
int main()
{
pid_t pid;
pid = fork();
if (pid == 0) {
value += 15;
return 0;
}
else if (pid > 0) {
wait(NULL);
printf("PARENT: value= %d\n",value);
return 0;
}
/* LINE A
*/
}