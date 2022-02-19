/*
Q1.b. Run the code $ ./a.out ITER SOA IBCS, and print all the command-line tokens.
*/
#include <stdio.h>
int main(int argc,char *argv[]){
    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    return 0;
}