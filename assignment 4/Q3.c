/* 
3. The below given code snippet demonstrate the use of multiple delimiters with strtok, the second
argument is a C string with the list of delimiters in it. Run the sample code to get the desired tokens
as output.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[] ="ITER:IBCS;SOA:Pot*Hot";
char* token;
token=strtok(str,":;*");
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok(NULL,":;*");
}
return 0;
}
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[] ="ITER:IBCS;SOA:Pot*Hot";
char* token;
token=strtok(str,":;*");
while (token!=NULL){
printf("Token=%s\n",token);
token=strtok(NULL,":;*");
}
return 0;
}