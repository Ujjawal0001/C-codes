//finding kth element
#include<stdio.h>
int main(){
    int a[5]={10,50,0,100,20},b;
    printf("Enter kth element to find : ");
    scanf("%d",&b);
    for(int i = 0 ; i< 5 ; i++){
        if(i==b-1){
        printf("your kth element is : %d",a[i]);
        }
    }
    return 0;
} 