#include<stdio.h>
int main (){
    int s1=6,s2=5,s3=8,c;
    int a[6]= { 1, 5, 10, 20, 40, 80  };
    int b[5]= { 6, 7, 20, 80, 100 };
    int d[8]={ 3 ,4, 15, 20, 30, 70, 80, 120 };
    if(s1>s2&&s1>s3){
        c=s1;
    }
    else if(s2>s1&&s2>s3){
        c=s2;
    }
    else{
        c=s3;
    }
    for(int i=0 ; i < c ; i++){
        for(int j = 0 ; j < c ; j++ ){
            for(int l = 0 ; l < c ; l++){
                if(a[i]==b[j]&&a[i]==d[l]){
                    printf("%d ",a[i]);
                }
            }
        }
    }

    return 0;
}