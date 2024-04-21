// 7.WAP to take a input and count that number present in a matrix?
// Input:
// 8 6 1
// 4 2 5
// K=6
// Output :
// 6 present on [0,1].



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
    int find,c=0;
    scanf("%d",&find);
       for(int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            if(a[i][j]==find){
                printf("%d is present at [ %d , %d ]",find,i,j);              
        }
            else{
                c=1;
        }
    }
       }
       if(c==1){
        printf("Invalid input ");
       }
    return 0;
}