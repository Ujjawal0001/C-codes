#include<stdio.h>
int main (){
    int a[6]= { 2, 2, 1, 7, -1, 3 }, k = 4 , count = 0 ,sum ;
    for(int i = 0 ; i < 6 ; i++ ){
        for( int j = i+1 ; j < 6 ; j++){
            sum=a[i]+a[j];
            if(sum%k==0){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}