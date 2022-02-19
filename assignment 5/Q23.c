/*
23. Using the program given below, identify the values of pid at lines A, B,C, and D . 
( A test case for manual execution: Assume that the actual pids of the parent and 
child are 2600 and 2603 respectively.) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
int main() { 
pid_t pid, 
pid1; 
int status; 
pid = fork(); 
if (pid < 0) { /* error occurred */
fprintf(stderr, "Fork Failed"); 
return 1; 
} 
else if (pid == 0) { /* child process */ 
pid1 = getpid(); 
printf("child: pid = %d \n",pid); /* A */ 
printf("child: pid1 = %d\n",pid1); /* B */ 
} 
else { /* parent process */ 
pid1 = getpid(); 
printf("parent: pid = %d\n",pid); /* C */ 
printf("parent: pid1 = %d\n",pid1); /* D */ 
wait(&status); 
} 
return 0; 
}