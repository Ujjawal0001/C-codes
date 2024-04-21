//descending
#include<stdio.h>
int main (){
    int a[5]={50,1,12,2,0},b;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if(a[i]<a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}