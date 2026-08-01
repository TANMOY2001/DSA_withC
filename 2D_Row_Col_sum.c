#include<stdio.h>
int main(){
    int a=1,b=1;
    printf("Enter The Number Of Row Size Of 2D ARRAY: ");
    scanf("%d",&a);
    printf("Enter The Number Of Column Size Of 2D ARRAY: ");
    scanf("%d",&b);
    int arr[a][b];
    int i,j,sum_R=0,sum_C=0;

    // For Taking input & Store...
    printf("Enter Array Element: \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
        // printf("\n\n");
    }

    // Printing Output 
    printf("array Element's are: \n");
    for(i=0;i<a;i++){
        for(j=0;j<b+1;j++){
            sum_R = sum_R+arr[i][j];
            sum_C = sum_C+arr[j][i];
            printf("%d\t",arr[i][j]); // For Printing actual Array Element's
            if(j==b-1){
                printf("%d",sum_R);
            }
            
        }
        sum_R=0;
        sum_C=0;

        printf("\n");
    }
}





