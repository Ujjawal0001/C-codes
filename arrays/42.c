#include<stdio.h>
int main (){
    int size=4;
   int a[4]={1 ,2 , 3 ,4 };
    for(int i =  0 ; i < size ; i++){
        printf(" { %d } \n",a[i]);
        for(int j = i+1 ; j < size ; j++){
             printf("{ %d %d }\n",a[i],a[j]);   
             for(int k = j +1 ; k < size ; k++){
                printf("{ %d %d %d }\n",a[i],a[j],a[k]);
             } 
        }
   }
    return 0;
}

// { {},{1},{2},{size},{1,2},{1,size},{2,size},{1,2,size} }
