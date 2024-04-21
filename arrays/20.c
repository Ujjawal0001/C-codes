//even and odd count
#include<stdio.h>
int main (){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int s=sizeof(a)/sizeof(a[0]),count1=0,count2=0;
    int a1[s],a2[s];
    for(int i = 0 ; i < s ; i++){
        if(a[i]%2==0){
            a1[count1]=a[i];
            count1++;
        }
        else{
            a2[count2]=a[i];
            count2++;
        }
    }
    printf("Even array : ");
    for(int j = 0 ; j < count1 ; j++){
        printf("%d ",a1[j]);
    }
    printf("\n");
    printf("odd array : ");
     for(int k = 0 ; k < count2; k++){
        printf("%d ",a2[k]);
    }

    return 0;
}