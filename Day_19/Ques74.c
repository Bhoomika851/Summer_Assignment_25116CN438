//Subtraction of Matrices
#include<stdio.h>
int main(){
    int a[20][20], b[20][20], sub[20][20],r1, r2, c1, c2;

    printf("Enter row and coloumn in A:");
    scanf("%d %d", &r1 ,&c1);
    printf("Enter row and coloumn in B: ");
    scanf("%d %d", &r2 ,&c2);  

    //input in A
    printf("\nEnter elements in A: \n");
    for (int i = 0; i < r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d/t", &a[i][j]);
        }
    }
    //input un B
    printf("Enter elements in B:\n ");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("B[%d][%d]", i, j);
            scanf("%d/t", &b[i][j]);
        }
    }

    //Sub logic
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    //Print output
    printf("THe subratcion of matrix is: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
