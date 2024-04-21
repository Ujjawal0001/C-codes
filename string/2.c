//WAP to copy one string to another


#include<stdio.h>
#include<string.h>
int main (){
    char arr1[10]="abc";
    char arr2[10];
    strcpy(arr2,arr1);
    printf("%s",arr2);

return 0;
}