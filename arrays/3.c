//multiply
#include<stdio.h>
int main (){
    int a[5]={1,2,3,4,5};
    int multiply=1;
    for(int i = 0 ; i < 5 ; i++){
        multiply=multiply*a[i];
    }
    printf("%d",multiply);
    return 0 ;
}