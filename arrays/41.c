#include<stdio.h>
int main (){
    int a[6]= { 4, 5, 7 , 10 };
    int size=4;
    for(int i = 0 ; i < size ; i++){
            if(i<size-1){
        for(int j = i+1 ; j < size ; j++){
            if(a[j]>a[i]){
                printf("%d ",a[j]);
                break;
            }         
        }
        }
        if(i==size-2){
            printf("-1 ");
        }
        }
    
    return 0;
}