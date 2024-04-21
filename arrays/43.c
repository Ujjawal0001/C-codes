#include<stdio.h>
int main (){
    int a[10]= { -1, -1, 6, 2, 9, 33, 1, -1, 4, -1 };
    int temp;
    //Output : { -1, 1, 2, 3, 4, -1, 6, -1, -1, 9 }
    
    for(int i = 0 ; i < 10 ; i++){
        if(a[i]>=0&&a[i]<10){
           while(a[i]!=-1&&a[i]!=i){
               temp = a[i];
            a[i] = a[temp];
            a[temp] = temp;
               }
    }
    }
   
    for(int i = 0 ; i < 10 ; i++){    
        printf("%d ",a[i]);  
    } 
    return 0;
}