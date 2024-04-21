#include<stdio.h>
int main (){
    int a[9]={1,2,4,7,1,9,1,9,2},b,count=1;
    for(int i = 0 ; i < 9 ; i++){
        for(int j = i+1 ; j < 9 ; j++){
            if(a[i]==a[j]){
                b=a[i];
                count++;
            }
        }
        if(count>1){
                break;
            }
    }
    printf("%d ,%d is count",b,count);
    return 0;
}