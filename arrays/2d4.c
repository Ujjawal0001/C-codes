// WAP to take a input and count that number present in a matrix?
// Input:
// 1 2 3
// 3 4 5
// K=3
// Output :
// Count=2



#include<stdio.h>
int main (){
    int row,col;
    printf("Enter no. of rows : ");
    scanf("%d",&row);
    printf("Enter no. of column : ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter elements of matrix : ");
    for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element to find : ");
    int find,count=0;
    scanf("%d",&find);
       for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            if(a[i][j]==find){
                count++;               
        }
    }
       }
    if(count>0){
    printf(" count of %d is %d ",find,count);
    }
    else{
        printf("404 error found!!!!");
    }
    return 0;
}