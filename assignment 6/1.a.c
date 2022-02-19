/*
Q1.. Consider the below given code segment;
#define BLKSIZE 8
int main(void)
{
char buf[BLKSIZE];
read(STDIN_FILENO, buf, BLKSIZE);
write(STDOUT_FILENO, buf, BLKSIZE);
return 0;
}

a.STUDENT [ Exactly 8 bytes including enter]
*/
#include <stdio.h>
#include <unistd.h>
#define BLKSIZE 8
int main(void)
{
char buf[BLKSIZE];
read(STDIN_FILENO, buf, BLKSIZE);
write(STDOUT_FILENO, buf, BLKSIZE);
return 0;
}