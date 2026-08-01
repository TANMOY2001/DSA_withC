// //print sum of individual row
// #include<stdio.h>
// int main(){
//     int i,j,sum=0;
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     printf("array Is: \n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             sum=sum+a[i][j];
//             printf("%d\t",a[i][j]);
//             if(j==2){
//                 printf("sum of %d 'th row is: %d",i,sum);
//             }
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,sum=0;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("array Is: \n");
    for(i=0;i<3;i++){ 
        for(j=0;j<3;j++){
            a[i][j];
            sum = sum + a[i][j];
            printf("%d\t",a[i][j]);
            if(j==2){
                printf("sum of %d 'th row is: %d\n",i,sum);
            }  
        }
        sum=0;
        // if(i==2){
        //         printf("col\tcol\tcol");
        //     }
        // printf("\n");
    }
}

