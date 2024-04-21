//WAP to concatenate two strings



#include<stdio.h>
#include<string.h>
int main (){
    char arr[]="abc";
    char arr1[]="def";
   // strcat(arr,arr1)
   char arr2[7];
    int j=0;
   for(int i=0;i<arr[i]!='\0';i++){
        arr2[i]=arr[i];
   }
  
   for(int k=3;k<6;k++){ 
    arr2[k]=arr1[j];
    j++;
   }
  puts(arr2);
return 0;
}