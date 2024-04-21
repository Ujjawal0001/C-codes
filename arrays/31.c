#include<stdio.h>
int main (){
    int a[7]={ 16, 17, 11, 3, 5, 2, 8};
    for(int i = 1 ; i < 6 ; i++ ){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            printf("%d ",a[i]);
        }
    }
    return 0;
}