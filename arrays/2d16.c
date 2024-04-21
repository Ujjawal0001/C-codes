// 16.wap to take a matrix and find kth minimum number?
// Input:
// 12 21 35
// 76 10 8
// K=3
// Output:
// 3rd min=12

#include<stdio.h>
int main (){
    int row,col,rows,colu;
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
    int temp;
    for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
            for(int k = 0 ; k < row ; k++){
                for(int l = 0 ; l < col ; l++){
                    if(a[i][j]<a[k][l]){
                        temp=a[i][j];
                        a[i][j]=a[k][l];
                        a[k][l]=temp;
                   }
                }
            }
        }
    }
printf("Sorted array is : \n");
     for( int i = 0 ; i < row ; i++){
        for ( int j = 0 ; j < col ; j++){
           printf("%d ",a[i][j]);   
            }
        printf("\n");
        }
  printf("Enter kth minimum to find  :");
  int k ;
  scanf("%d",&k);    
    int kthrow=(k-1)/col;
    int kthcol=(k-1)%col;
    printf("%dth minimum number is %d ", k,a[kthrow][kthcol])  ;  
      
    return 0;
                }
            
