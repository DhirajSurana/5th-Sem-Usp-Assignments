/*
Q1.D. Run the code $ ./a.out ITER SOA IBCS ‘‘23 45 67’’, and display the total number of arguments.
*/

#include <stdio.h>
int main(int argc, char *argv[]){
    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    return 0;
}