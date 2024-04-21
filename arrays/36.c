#include<stdio.h>
int main (){
    int a[8]={ 1,2,3,4,5,6,7,8 },b[8],temp;;
    for(int i = 0 ; i < 8 ; i=i+2){
        for(int j = i+1 ; j < 8 ; j=j+2){
             if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                break;
            }    
        }
    }
for (int i = 0 ; i < 8 ; i++ ){
    printf("%d ",a[i]);
}
    return 0;
}