// 8.WAP take two matrix and check whether they are equal or not.
// Example 1.
// i/p= [0],[0] : 1
// [0],[1] : 2
// [1],[0] : 3
// [1],[1] : 4
// second matrix :
// [0],[0] : 1
// [0],[1] : 2
// [1],[0] : 3
// [1],[1] : 4
// O/p= Both matrix Equal



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
    int c=0;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(a[i][j]!=b[i][j]){
                c=1;
            }
        }
    }
    if(c==1){
        printf("both matrices are not equal");
    }
    else{
        printf("both matrices are equal");
    }
    return 0;
}