//kth element to delete
#include<stdio.h>
int main (){
    int a[5]={10,20,30,40,50},b;
    printf("Enter kth element to delete : \n");
    scanf("%d",&b);
    if(b<=5&&b>0){
    for(int i = b-1 ; i < 5 ; i++){
        a[i]=a[i+1];
    }
    for(int i = 0 ; i < 4 ; i++){
        printf("%d ",a[i]);
    }
    }
    else{
        for(int i = 0 ; i < 5 ; i++){
        printf("%d ",a[i]);
    }
    }
    return 0;
}