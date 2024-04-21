#include<stdio.h>
int main (){
    int size=8;
    int a[8]={ 10, 5, 6, 3, 2, 20, 100, 80 },b[size],temp;
    
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }        
        }
    }
    int max =size-1;
    int min=0;
    for(int i = 0 ; i <size ; i=i+2){
        b[i]=a[min];
        b[i+1]=a[max];
        min++;
        max--;
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d ",b[i]);
    }
    return 0;
}