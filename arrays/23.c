//print duplicate and count of it
#include<stdio.h>
int main (){
    int a[10]={2,3,3,5,9,6,3,-9999,-9999,3},c[10];
    for(int i = 0 ; i < 10 ; i++ ){
        int count=0;
        for(int j = i+1 ; j < 10 ; j++){
            if(a[i]==a[j]){
                count++;
                a[j]=-9999;
            }
        }   
            if(count > 1 && a[i]!=-9999 ){
                printf("%d duplicate \n",a[i]);
                printf("count = %d\n",count+1);             
            }          
               
    }
    return 0;
}