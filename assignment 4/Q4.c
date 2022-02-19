/*
Q4. Now, change the string to char str[ ] ="∗ITER:IBCS;SOA:Pot∗Hot:", and test the out-
put for tokens. You will be getting the conclusion; “delimiter bytes at the start or end of the string are
ignored”.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[ ] ="*ITER:IBCS;SOA:Pot*Hot:";
char* token;
token=strtok(str,":;*");
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok(NULL,":;*");
}
return 0;
}