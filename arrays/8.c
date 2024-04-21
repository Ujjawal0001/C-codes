//max
#include<stdio.h>
int main (){
    int a[5]={4,5,3,8,1},b;
    b=a[0];
    for(int i = 0 ; i < 5 ; i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    printf("%d",b);
    return 0;
}