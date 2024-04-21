// 10.Write a C program to read elements in a matrix and find the sum of elements of
// each row and columns of matrix. C program to calculate sum of rows and columns of
// matrix.
// Input:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3= 24
// Sum of column 1= 12
// Sum of column 2= 15
// Sum of column 3= 18




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
    for(int i = 0 ; i < row ; i++){
    int sum1=0;
        for(int j = 0 ; j < col ; j++){
           sum1=sum1+a[i][j];
        }
           printf("sum of row %d = %d\n",i+1,sum1);
    }
      for(int i = 0 ; i < row ; i++){
    int sum2=0;
        for(int j = 0 ; j < col ; j++){
           sum2=sum2+a[j][i];
        }
           printf("sum of column %d = %d\n",i+1,sum2);
    }
    return 0;
}
