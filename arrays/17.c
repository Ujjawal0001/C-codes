//kth min
#include<stdio.h>
int main (){
    int a[5]={10,20,3,40,50},b,c;
    printf("which smallest number you wanna find ? \n");
    scanf("%d",&c);
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j< 5 ; j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    if(c<=5&&c!=0){
        printf("%d is your %d smallest number : ",a[c-1],c);
    }
    else{
        for(int i = 0 ; i < 100 ; i++){
        printf("Your device is hacked ..........TRY AGAIN LATER!!!!!");
    }
    }
    return 0;
}