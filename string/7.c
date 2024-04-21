//WAp to count total numbers of alphabets ,digits or special character in a string


#include<stdio.h>
#include<string.h>
int main (){
    char arr[]="aBc12'/";
    int alphabet=0;
    int digit=0;
    for(int i = 0 ;i<strlen(arr);i++){
        if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')){
            alphabet++;
        }
        else{
            digit++;
        }
    }
    printf("number of alphabet is %d \n",alphabet);
    printf("number of digit or character is %d ",digit);
    return 0;
}