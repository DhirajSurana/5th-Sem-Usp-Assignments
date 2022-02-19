/*
Q11.How does the output appear when the following program executes?
*/
#include <stdio.h>
int main(void)
{
int i;
fprintf(stdout, "a");
scanf("%d", &i);
fprintf(stderr, "a has been written\n");
fprintf(stdout, "b");
fprintf(stderr, "b has been written\n");
fprintf(stdout, "\n");
return 0;
}