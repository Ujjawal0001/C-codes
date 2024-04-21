#include<stdio.h>
int main (){
    int a[5]={4,5,7,2,9};
    int b[5]={5,3,5,7,9};
    int c[5],count=0,d[10];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(a[i]==b[j]){  
                c[count]=b[j];
                count++;               
            }
        }
    }
    printf("Intersection : \n");
for(int i = 0 ;i < count ; i++){
    printf("%d",c[i]);
}
printf("\n");
    for(int i  = 0 ; i < count ; i++){
        if(c[i]!=c[i+1]){
        printf("%d ",c[i]);
    }
    }
    printf("\n");
    printf("Union : ");

    for(int i = 0 ; i < 5 ; i++ ){
          d[i]=a[i];
        }
    for(int i = 0 ; i < 5 ; i++ ){
          d[5+i]=b[i];
        }
//           for(int i = 0 ; i < 10 ; i++ ){
//           printf("%d",d[i]);
//         }
// printf("\n");



    for(int i = 0 ; i < 10 ; i++){
        int count1=0;
        for(int j = i+1 ; j < 10 ; j++){
        if(d[i]==d[j]){
            count1++;
        }
        }
        if(count1==0){
        printf("%d",d[i]);
    }
    }
    return 0;
}