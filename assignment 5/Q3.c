/*
Q3.Modify the above code by adding a newline chracter "\n" in the else block printf statement. 
Then find how many times iter will be displayed. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
int pid,pid2;
pid=fork();
if(pid) {
pid2=fork();
printf("iter");
}
else {
printf("iter\n");
pid2=fork();
}
return 0;
}