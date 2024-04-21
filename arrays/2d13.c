// 15.WAP to take a matrix and find kth maximum number?
// Input:
// 12 21 35
// 76 10 8
// K=3
// Output:
// 3rd max=35


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
                for(int l =  0; l < col ; l++){
                    if(a[i][j]>a[k][l]){
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


int k;
     printf("enter the Kth no.:");
    scanf("%d",&k);
//    if (k > 0 && k <= row * col) {
//         printf("The %dth maximum element is: %d\n", k, a[(k - 1) / row][(k - 1) % row]);
//     } else {
//         printf("Invalid value of k.\n");
//     } 
    if (k > 0 && k <= row * col) {
        int kthRow = (k - 1) / col;
        int kthCol = (k - 1) % col;
        printf("The %dth maximum element is: %d\n", k, a[kthRow][kthCol]);
    } else {
        printf("Invalid value of k.\n");
    }
    return 0;
                }