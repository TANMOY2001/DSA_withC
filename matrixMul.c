#include <stdio.h>
int main() {
    int m = 1, n = 1, x = 1, y = 1;
    int a[m][n], b[x][y];
    int mul=0,sum=0;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &x, &y);
    if(n != x) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }else {
    
        printf("Enter the elements of the first matrix:\n");
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                for (int k = 0; i < 3; k++){
                    mul=a[i][k]*b[k][j];
                    sum = sum + mul;
                }
                

            }
        }

    }
    return 0;
}