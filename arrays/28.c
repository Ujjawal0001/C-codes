#include<stdio.h>
int main (){
    int a[6]={0,2,4,5,6,8};
    for(int i = 0 ; i < 5 ; i++){
        if(a[i+1]-a[i]!=1){
            printf("%d ",a[i]+1);      
        }
    }
    return 0 ;
}