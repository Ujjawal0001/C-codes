#include<stdio.h>
int main (){
    int a[7]={ 5,4,7,3,5,3,4 };
    for(int i = 0 ; i < 7 ; i++){
        int count=0;
        for( int j = 0; j < 7 ; j++){
            if(a[i]==a[j]&&i!=j){
                count++;
            }
          
        } 
   if(count==0){
    printf("%d ",a[i]);
   }}
   return 0; 
}
