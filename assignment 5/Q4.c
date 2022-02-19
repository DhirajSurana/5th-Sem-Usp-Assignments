/*
Q4. Check how many ITER will be printed for the following code snippet?
#include <stdio.h>
#include <unistd.h>
int main(void) {
fork();
fork();
fork();
fork();
printf("ITER\n");
printf("ITER\n");
printf("ITER\n");
sleep(4);
return 0;
}
Find out a simple formula to compute the output for this like questions.
*/
#include <stdio.h>
#include <unistd.h>
int main(void) {
fork();
fork();
fork();
fork();
printf("ITER\n");
printf("ITER\n");
printf("ITER\n");
sleep(4);
return 0;
}
