#include<stdio.h>
int main (){
   int a[6]= { 0, 1, 2, 0, 1, 2 },temp;
   for(int i = 0 ; i < 6 ; i++){
    for( int j = i+1 ; j < 6 ; j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }
   for(int i = 0 ; i < 6 ; i++){
    printf("%d",a[i]);
   }
   return 0;
}