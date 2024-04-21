#include<stdio.h>
int main (){
    int b,c,row,col,rows,colu,i,j,k,l;
    printf("enter row : ");
    scanf("%d",&row);
    printf("enter column : ");
    scanf("%d",&col);
    int a[row][col];
    printf("element of first matrix : \n");
    for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int e[row][col];
        printf("element of second matrix : \n");
        for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            scanf("%d",&e[i][j]);
        }
    }
    for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            printf("%d ",e[i][j]);
        }
        printf("\n");
    }
    int product[row][col] ;
    printf("product of matrices : \n");
     for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
         product[i][j]=0;
            for(int k = 0 ; k < row ; k++ ){
            product[i][j] += a[i][k]*e[k][j];
            }
        printf("%d ",product[i][j]);
        }   
        printf("\n");
    
}
return 0;
}



