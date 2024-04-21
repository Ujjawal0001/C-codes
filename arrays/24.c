//finding element in an array
#include<stdio.h>
int main (){
    int size ,b,c=0; 
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter elements of array : ");
    int a[size];
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to find : ");
    scanf("%d",&b);
    for(int i = 0 ; i < size ; i++){
            if(a[i]==b){
                c=a[i];
            }       
    }
    if(c!=-999999){
                    printf("%d is present",c);
    }
    else{
                    printf("%d is not present",b);
    }
    return 0;
    }