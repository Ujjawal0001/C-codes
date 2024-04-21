//min
#include<stdio.h>
int main (){
    int a[5]={0,2,0,5,6},b=a[0];
    for(int i = 0 ; i < 5 ; i++){
        if(a[i]<b){
            b=a[i];
        }
    }
    printf("%d",b);
    return 0;
}