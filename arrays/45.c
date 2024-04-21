// 31.Write a program to find the maximum sum subarray in an array?
// Input : { -2, -3, 4, -1, -2, 1, 5, -3 }
// Output : The maximum sum subarray is { 4, -1, -2, 1, 5 }



#include<stdio.h>
int main (){
    int size = 8 ;
    int a[8]={ -2, -3, 4, -1, -2, 1, 5, 0 } ;
    int max = a[0],c[size],count;
    for(int i = 0 ; i < size ; i++){
    int sum = 0 ;
            for(int k = i  ; k < size ; k++){
                sum=sum +a[k];
                if(sum > max){
                   count=0;
                   max=sum;
                      for (int j = i; j <= k; j++) {
                    c[count++] = a[j]; 
                }
                }
            }
    }
    for(int i = 0 ; i < count ; i++){
        printf("%d ",c[i]);
    }
    return 0;
}