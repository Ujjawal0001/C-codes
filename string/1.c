//WAP to find length of string




#include<stdio.h>
#include<string.h>
int main (){
    char arr[]="abcde";
    // int s=strlen(arr);
    // printf("%d",s);
    int length=0;
    for(int i=0;i<arr[i]!='\0';i++){
        length++;
    }
    printf("%d",length);
    return 0;
}