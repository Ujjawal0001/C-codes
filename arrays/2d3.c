//product of all elements of the matrix
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
    int product=1;
    printf("product is : \n");
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            product=product*a[i][j];
        }
    }
            printf("%d ",product);

    return 0;
}