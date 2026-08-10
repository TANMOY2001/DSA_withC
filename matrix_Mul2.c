#include<stdio.h>
int main(){
    int m=0,n=0,x=0,y=0;
// Taking input for the number of rows and columns for both matrices
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d",&x,&y);
    int a[m][n],b[x][y],ans[m][y];
// Checking if matrix multiplication is possible or Not
    if(n!=x){
        printf(" !!! \tMatrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    }
    else{
// Taking input for the first matrix
        printf("Enter the elements of the first matrix:\n");
        for(int i=0; i<m; i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
// Taking input for the second matrix
        printf("Enter the elements of the second matrix:\n");
        for(int i=0; i<x; i++){
            for(int j=0;j<y;j++){
                scanf("%d",&b[i][j]);
            }
        }
// printing the first matrix...
        printf("the first matrix is :\n");
        for(int i=0; i<m; i++){
            for(int j=0;j<n;j++){
                printf("\t%d",a[i][j]);
            }
            printf("\n");
        }
// printing the second matrix...
        printf("Enter the elements of the second matrix:\n");
        for(int i=0; i<x; i++){
            for(int j=0;j<y;j++){
                printf("\t%d",b[i][j]);
            }
            printf("\n");
        }
// performing matrix multiplication
        int mul=0,sum=0;
        printf("The result of matrix multiplication is:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<y;j++){
                sum=0;
                for (int k = 0; k < n; k++){
                    mul=a[i][k]*b[k][j];
                    sum = sum + mul;
                    ans[i][j]=sum;
                }
                
            }
            
        }
// printing the result of matrix multiplication
        for(int i=0; i<m; i++){
            for(int j=0;j<y;j++){
                printf("\t%d",ans[i][j]);
            }
            printf("\n");
        }
    }
}
