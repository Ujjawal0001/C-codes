//merge
#include<stdio.h>
int main (){
    int s1=3,s2=2;
    int a[3]={1,2,3};
    int b[2]={4,5};
    int s3=s1+s2;
    int c[s3];
    for(int i = 0 ;i <s1 ; i++){
        c[i]=a[i];
    }
    for(int i = 0 ;i <s2 ; i++){
        c[s1+i]=b[i];
    }
    for(int i = 0 ;i <s3 ; i++){
        printf("%d",c[i]);
    }
    return 0;
}