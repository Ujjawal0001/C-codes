// #include<stdio.h>
// int main (){
//     int a;
//    scanf("%d",&a);
//      for(int i=1;i<=a;i++){                          1
//             int count=2,add=1;                       24
//         for(int j=1;j<=i;j++){                       135
// if(i%2==0){                                          2468
//                                                      13579
//     printf("%d",count);
//     count=count+2;

// }
// else{
//             printf("%d",add);
// add=add+2;


//         }
//         }
//         printf("\n");
     
// }
// return 0;
// }





// #include<stdio.h>
// int main (){                                   1
//     int a;                                     10
//     scanf("%d",&a);                            101
//     for(int i=1;i<=a;i++){                     1010
//         for(int j=1;j<=i;j++){                 10101
//             if(j%2==0){
//                 printf("0");
//             }
//             else{
//                 printf("1");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
        


//         #include<stdio.h>
// int main (){
//     int a;                                            54321
//     scanf("%d",&a);                                   5432
//     for(int i=0;i<=a;i++){                            543
//         for(int j=a;j>i;j--){                         54 
//             printf("%d",j);                           5
//         }
//         printf("\n");
//     }
//     return 0;
// }






//         #include<stdio.h>
// int main (){                                    12345
//     int a;                                      1234
//     scanf("%d",&a);                             123
//     for(int i=a;i>=1;i--){                      12
//         for(int j=1;j<=i;j++){                  1
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
        




// #include<stdio.h>
// int main (){                                            12345
//     int a;                                              1234
//     scanf("%d",&a);                                     123
//     for(int i=a;i>=1;i--){                              12
//         for(int j=1;j<=i;j++){                          1
          

//             printf("%d",j);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
        



//         #include<stdio.h>
// int main (){                                                12345
//     int a;                                                  2345
//     scanf("%d",&a);                                         345
//     for(int i=1;i<=a;i++){                                  45
//         for(int j=i;j<=a;j++){                              5
          

//             printf("%d",j);
            
//         }
//         printf("\n");
//     }
//     return 0;
// }


        


//          #include<stdio.h>
// int main (){
//     int a=5;                                                      // 55555
//     //scanf("%d",&a);                                             // 55555
//     for(int i=1;i<=a;i++){                                        // 55555
//         for(int j=1;j<=a;j++){                                    // 55555
//           printf("%d",a);                                         // 55555

            
//         }
//         printf("\n");
//    }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a;
//     printf("Enter the number of rows for the pattern: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++) {
//         int n=0;
//         if(i%2==0){                                             1
//             n=0;                                                01
//         }else{                                                  101 
//             n=1;                                                0101
//         }                                                       10101
//         for (int j = 1; j <= i; j++) {         
//             printf("%d",n);
//             n=!n;
//         }
//         printf("\n");
//     }

//     return 0;
// }








//  #include<stdio.h>
// int main (){
//     int a=5,k;                                   1         
//     scanf("%d",&a);                              2 6             
//     for(int i=1;i<=a;i++){                       3 7 10 
//         k=i;                                     4 8 11 13
//         for(int j=1;j<=i;j++){ 
//             printf("%d ",k);
//             k=k+5-j;
//             }                                
            
        
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main (){                                                  1
//     int a;                                                   121
//     scanf("%d",&a);                                         12321
//     for(int i =1 ; i<=a ; i++){                            1234321
//     for(int j =1 ; j<=a-i ; j++){
//         printf(" ");
//     }
//     for(int k =1 ; k <=i ; k++){
//         printf("%d",k);
//     }
//     for(int l = i-1 ; l>=1; l--){
//         printf("%d",l);
//     }

//     printf("\n");
//     }
//     return 0;
// }