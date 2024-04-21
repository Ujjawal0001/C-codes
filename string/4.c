//WAP to compare to strings 


#include<stdio.h>
#include<string.h>
int main (){
    char arr[]="abb";
    char arr1[]="abc";
    // int a=strcmp(arr1,arr);
    // printf("%d",a);
    int check=0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==arr1[i]){
            check=0;
            continue;
        }
        else if(arr[i]>arr1[i]){
            check=1;
            
        }
        else{
            check=-1;
        }
    }
    printf("%d",check);
    return 0;
}