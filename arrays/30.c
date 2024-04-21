//leaders

#include<stdio.h>
int main (){
    int a[6]={16,17,4,3,5,2};
    for(int i = 0 ; i < 6 ; i++){
        int j;
        for( j = i +1 ; j < 6 ; j++){
        if(a[i]<a[j]){
            break;
        }
        }
        if(j==6){
            printf("%d ",a[i]);
        }
        
    }
return 0;
}