//55555
//45555
//34555
//23455
//12345


#include<stdio.h>
int main (){
    int a=5;
    //scanf("%d",a);
    for(int i=5;i>=1;i--){
        for(int j=i;j<=5;j++){
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("5");
        }
        
        printf("\n");
    }
}