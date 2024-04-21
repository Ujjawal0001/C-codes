#include<stdio.h>
int main (){
    int a[7]= { 2, -5, 3, 9, -1 };
    int max2=-999;
    for(int i = 0 ;i < 5 ; i++){
        int max=0;
        for(int j = i+1 ; j < 5 ; j++){
            if(a[j]>0){
             max=a[i]-a[j];
              if( max>max2){
                max2=max;
             }
        }
        else{
             max=a[i]+a[j];
              if( max>max2){
                max2=max;              
             }
        }
    }
    }
    printf("%d",max2);
    return 0;
}