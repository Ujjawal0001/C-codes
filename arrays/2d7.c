// 9.WAP to print the transpose of a matrix. The transpose of a matrix is found by
// interchanging its rows into columns or columns into rows.
// Input:
// 1 2 3
// 4 5 6
// Output:
// 1 4
// 2 5
//3 6




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
    printf("Transpose : \n");
    for(int i = 0 ; i < col ; i++ ){
        for(int j = 0 ; j < row ; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}