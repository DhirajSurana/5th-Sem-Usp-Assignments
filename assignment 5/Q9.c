/*
Q9. How many display will be there for the given below code sample;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
int i;
for(i=0;i<4;i++)
fork();
printf("Learing by doing practice or !!!\n");
return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
int i;
for(i=0;i<4;i++)
fork();
printf("Learing by doing practice or !!!\n");
return 0;
}