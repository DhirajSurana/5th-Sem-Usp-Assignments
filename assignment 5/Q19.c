/*
19. The following modification of the process fan of causes the original process to print out its 
information after all children have exited. Test the code and veify the output. The errno EINTR is 
the cause of function was interrupted by a signal. Add appropiate header as per the usages. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
pid_t waitForAllChld(int *loc); 
int main (int argc, char *argv[]) { 
pid_t childpid = 0; 
int i, n; 
int status; 
if (argc != 2){
/* check for valid number of command-line arguments */ 
fprintf(stderr, "Usage: %s processes\n", argv[0]); 
return 1; 
} 
n = atoi(argv[1]); 
for (i = 1; i < n; i++){ 
childpid=fork(); 
if (childpid <=0) break; 
} 
while(waitForAllChld(NULL)>0); 
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",i, (long)getpid(), (long)getppid(), (long)childpid); 
return 0; 
} 
pid_t waitForAllChld(int *loc){ 
int retval; 
while(((retval=wait(loc))==-1)&& (errno==EINTR)); 
return retval; 
} 