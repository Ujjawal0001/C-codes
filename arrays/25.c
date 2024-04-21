//finding index number for a given sum
#include<stdio.h>
int main (){
    int a[6]={6,8,4,-5,7,9};
    int sum=15;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = i +1 ; j < 6 ; j++){
            if(a[i]+a[j]==sum){
                printf("value of index %d and %d sum is equals to : %d\n",i,j,sum);
            }
        }
    }
    return 0;
}