#include<stdio.h>
int main (){
   int a[6]= { 0, 1, 0, 1, 1, 1 },temp;
   for(int i = 0 ; i < 6 ; i++){
    for( int j = i+1 ; j < 6 ; j++){
        if(a[i]!=0){
            if(a[j]==0){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
          
        }
    }
   }
   for(int i = 0 ; i < 6 ; i++){
    printf("%d",a[i]);
   }
   return 0;
}