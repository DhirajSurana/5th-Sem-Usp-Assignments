/*
Q17. What happens when the following program executes?
int main(void) {
pid_t childpid, mypid;
mypid = getpid();
childpid = fork();
if (childpid == -1) {
perror("Failed to fork");
return 1;
}
if (childpid == 0)
printf("I am child %ld, ID = %ld\n", (long)getpid(),
(long)mypid);
else
printf("I am parent %ld, ID = %ld\n", (long)getpid()
, (long)mypid);
return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
pid_t childpid, mypid;
mypid = getpid();
childpid = fork();
if (childpid == -1) {
perror("Failed to fork");
return 1;
}
if (childpid == 0)
printf("I am child %ld, ID = %ld\n", (long)getpid(),
(long)mypid);
else
printf("I am parent %ld, ID = %ld\n", (long)getpid()
, (long)mypid);
return 0;
}