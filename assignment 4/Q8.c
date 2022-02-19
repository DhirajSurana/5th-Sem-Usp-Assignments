/*
Q8. The strtok r() function is a reentrant version strtok(). The strtok r() function behaves
similarly to strtok() except for an additional parameter. The saveptr argument is a pointer
to a char variable that is used internally by strtok r() in order to maintain context between
successive calls that parse the same string. On the first call to strtok r(), str should point to the
string to be parsed, and the value of saveptr is ignored. In subsequent calls, str should be NULL,
and saveptr should be unchanged since the previous call. A sample demo code is given for your
reference as;
#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "lesson-plan-usp-DOS";
char *token;
char *last;
token = strtok_r(str, "-", &last);
while (token!=NULL) {
printf("Token: %s\n", token);
token = strtok_r(NULL, "-", &last);
}
return (0);
}
Write your ’C’ code using strtokr() to determine the average number of words per line. Refer
Program 2.4 of your text book.
*/