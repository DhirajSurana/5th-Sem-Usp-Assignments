/*
Q1.C. Run the code $ ./a.out "12 34 56", and display the total number of arguments.[Hint:
      grouping of tokens]
*/

#include <stdio.h>
int main(int argc,char *argv[]){
    for(int i=0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
}