//rotating by one
#include<stdio.h>
int main (){
    int size = 5;
    int a[5]={1,2,3,4,5},b[5];
    int temp;
    for(int i = 0 ; i < 5 ; i++){
        if(i==0){
          temp =a[0];
          a[0]=a[size-1];
          a[size-1]=temp;          
        }
        printf("%d",a[i]);
    }
    return 0 ; 
}