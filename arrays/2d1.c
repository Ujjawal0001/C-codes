//sum of two matrices
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
    printf("second matrix : \n");
    printf("Enter elements of matrix : ");
    int b[row][col];
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            scanf("%d",&b[i][j]);
        }
    }
     for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int sum[row][col];
    printf("sum is : \n");
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}