//input output using function
#include<stdio.h>
void input(int a[] , int size){
    for(int i =0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
}
void output(int a[] , int size){
    for(int i =0 ; i<size ; i++){
        printf("%d",a[i]);
    }
}
int main (){
    int size=4;
    int a[size];
    input(a,size);
    output(a,size);
    return 0;
}