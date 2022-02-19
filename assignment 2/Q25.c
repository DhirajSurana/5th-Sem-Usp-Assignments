/*
Q25.Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.
*/
#include <stdio.h>
#include <string.h>
void changeCase(char *str)
{   
    printf("the given sentence is: %s\n",str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("After case reversal the sentence is: %s\n",str);
    printf("\n");

}
int main(){
    char str[100];
    printf("Enter a sentence: ");
    gets(str);
    changeCase(str);
    return 0;
}
/*
Output:
Enter a sentence: This Is A Test String.
the given sentence is: This Is A Test String.
After case reversal the sentence is: tHIS iS a tEST sTRING.
*/