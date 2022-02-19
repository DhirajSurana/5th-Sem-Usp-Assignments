/*
Q23.Write a program to take a product code from Millies Mail-Order Catalog (MMOC) and separate it
into its component parts. An MMOC product code begins with one or more letters identifying the
warehouse where the product is stored. Next come the one or more digits that are the product ID. The
final field of the string starts with a capital letter and represents qualifiers such as size, color, and so
on. For example, ATL1203S14 stands for product 1203, size 14, in the Atlanta warehouse. Write a
program that takes a code, finds the position of the first digit and of the first letter after the digits, and
uses strcpy and strncpy to display a report such as the following:
    Warehouse: ATL
    Product: 1203
    Qualifiers: S14
*/
#include <stdio.h>
#include <string.h>
int main(){
    char code[20];
    char warehouse[20];
    char product[20];
    char qualifiers[20];
    int i,j,k;
    printf("Enter the code: ");
    scanf("%s",code);
    for(i=0;i<strlen(code);i++){
        if(code[i]>='0' && code[i]<='9'){
            break;
        }
    }
    for(j=i;j<strlen(code);j++){
        if(code[j]>='A' && code[j]<='Z'){
            break;
        }
    }
    strcpy(warehouse,code);
    strcpy(product,code+i);
    strcpy(qualifiers,code+j);
    printf("Warehouse: %s\n",warehouse);
    printf("Product: %s\n",product);
    printf("Qualifiers: %s\n",qualifiers);
    return 0;
}