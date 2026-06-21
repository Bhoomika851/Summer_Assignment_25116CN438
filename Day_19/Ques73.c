#include<stdio.h>
int main(){
    int r1, r2, c1, c2, a[10][10], b[10][10], sum[10][10];
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    //Input of matrix A
    printf("\n Enter the element in A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //Input of matrix B
    printf("\n Enter the elements in matrix B: \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("B[%d][%d]", i ,j);
            scanf("%d", &b[i][j]);
        }
    }

    //Addition logic
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            sum[i][j]= a[i][j] + b[i][j];
        }
    }
    // Check if addition is mathematically possible
    if (r1 != r2 || c1 != c2) {
        printf("Error: Matrices must have identical dimensions to be added!\n");
        return 0; // Terminate the program early
    }

    //printing output SUM
    printf("The sum is: ");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}