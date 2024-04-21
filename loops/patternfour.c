// #include<stdio.h>                                            *
// int main (){                                                 **
//     int a;                                                   ***
//     printf("enter number : ");                               ****
//     scanf("%d",&a);                                          *****
// for(int i=1;i<=a;i++){
//     for(int j=1;j<=i;j++){
//         printf("*");
//     }
// printf("\n");

// }
// return 0;
//         }



//     #include<stdio.h>
// int main (){
//     int a;                                                        *****
//     printf("enter number : ");                                    ****
//     scanf("%d",&a);                                               ***
// for(int i=a;i>=1;i--){                                            **
//     for(int j=1;j<=i;j++){                                        *
//         printf("*");
//     }
// printf("\n");

// }
// return 0;
//       }




// #include<stdio.h>
// int main (){                                                      *
//     int a;                                                       **
//     printf("enter number : ");                                  ***
//     scanf("%d",&a);                                            ****
// for(int i=a;i>0;i--){                                         *****
//     for(int j=1;j<=a;j++){
//         if(j>=i){
//         printf("*");
//     }
    
//     else{
//         printf(" ");
//     }
//     }
// printf("\n");


// }
// return 0;
// }   
    
  



    
// #include<stdio.h>
// int main (){                                                    *****
//     int a=5;                                                     ****
// for(int i=0;i<=5;i++){                                            ***
//     for(int j=0;j<=5;j++){                                         **
//         if(j<=i){                                                   *
//         printf(" ");
//     }
    
//     else{
//         printf("*");
//     }
//     }
// printf("\n");


// }
// return 0;
// }    



//pyramid
#include<stdio.h>
int main (){
    int a;
    printf("Enter number of rows : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}


