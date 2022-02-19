/*
Q30.Write a function bracket by len that takes a word as an input argument and returns the word
    bracketed to indicate its length. Words less than five characters long are bracketed with << >>
    , words five to ten letters long are bracketed with (* *), and words over ten characters long are
    bracketed with =+ += . Your function should require the calling function to provide as the first
    argument, space for the result, and as the third argument, the amount of space available. Consider the
    expected results of these calls to the function.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int len;    
    printf("Enter a word: ");
    gets(str);
    len=strlen(str);
    if(len<5){
        printf("<<%s>>",str);
    }
    else if(len>=5 && len<=10){
        printf("(*%s*)",str);
    }
    else{
        printf("/+%s+/",str);
    }
    return 0;
}