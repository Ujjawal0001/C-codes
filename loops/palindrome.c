#include<stdio.h>
int main (){
    int a,rev=0,rem;
    printf("enter number : ");
    scanf("%d",&a);
    int check=a;
    for(int i= 1;a>0;i++){
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;//or a/=10
    }
    
    printf("%d\n",rev);

    if(check==rev){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome");
    }
    
    return 0;
}