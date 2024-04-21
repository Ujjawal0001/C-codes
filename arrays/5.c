//average
#include<stdio.h>
int main (){
    int a[5]={1,2,3,4,5},count=0,avg,sum=0;
    for(int i = 0 ;i <5 ;i++){
        if(a[i]%2!=0){
            count++;
            sum=sum+a[i];
        }
    }
    avg=sum/count;
    printf("%d",avg);
    return 0;
}