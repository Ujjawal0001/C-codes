//0 or 1
#include<stdio.h>
int main (){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int a[size],b[size];
    printf("Enter elements (only 0 and 1) : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1){
            b[i]=a[i];
        }
        else{
            printf("Invalid input\n");
            i--;
        }
    }
    for(int i = 0 ; i< size ; i++){
        printf("%d ",b[i]);
    }
    return 0;
}