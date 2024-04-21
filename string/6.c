//WAP to toggle case of each character in string



#include<stdio.h>
#include<string.h>
int main (){
    char arr[]="aBcDe";
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]>=97){
            arr[i]=arr[i]-32;
            continue;
        }
        else if(arr[i]>=65&&arr[i]<97){
            arr[i]=arr[i]+32;
        }
    }
    puts(arr);
    return 0;
}