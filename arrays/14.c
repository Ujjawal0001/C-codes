//ascending
#include<stdio.h>
int main (){
    int a[5]={1,2,0,5,6},temp;
    for(int i = 0 ; i < 5 ; i++){
       for(int j = i+1 ; j < 5 ; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
       }
    }
        printf("%d ",a[4]);

    for(int i = 0 ; i< 5 ; i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}