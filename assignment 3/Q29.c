/*
Q29.Write a program in C to read N strings from user and then sort them using bubble sort.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[3][50], temp[50];
   printf("Enter 3 words: ");

   for (int i = 0; i < 3; ++i) {
      gets(str[i], sizeof(str[i]), stdin);
   }

   for (int i = 0; i < 3; ++i) {
      for (int j = i + 1; j < 3; ++j) {
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 3; ++i) {
      printf("%s\n",str[i]);
   }
   return 0;
}
