// 12.WAP to take a matrix and find minimum element?
// Input:
// 12 21 35
// 76 10 8
// Output:
// Min=8.


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
       for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    int temp=+999;

    for(int i = 0 ; i < row; i++){
        for( int j = 0 ; j < col ; j++){
            if(a[i][j]<temp){
               temp=a[i][j];
            }
        
        }
    }
        printf("min = %d",temp);


    return 0;
}