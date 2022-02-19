/* 
Q8. heck the output and state the reason for this output.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
printf("Fork create many confusion\n");
fork();
printf("We suppose to read and Practice\n");
return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
printf("Fork create many confusion\n");
fork();
printf("We suppose to read and Practice\n");
return 0;
}