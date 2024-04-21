//WAP to convert lowercase string to uppercase string


#include<stdio.h>
#include<string.h>
int main(){

    char arr[]="aBc";
    int x=97;
    for(int i=0;i<strlen(arr);i++){
      if(arr[i]>=x){
        arr[i]=arr[i]-32;
      }
    }
    puts(arr);
    return 0;
}