//reverse
#include<stdio.h>
int main (){
    int size = 4;
    int a[5]={4,3,2,1};
    int b=size-1,temp;
    for(int i = 0 ; i < size/2  ; i++){
        temp=a[i];
        a[i]=a[b - i ];
        a[b-i]=temp;
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d",a[i]);
    }
    return 0;
}