//To multiply matrices

#include<stdio.h>
int main(){
    int a[20][20], b[20][20], c[20][20], r1, r2, c1, c2;
    printf("Enter row and coloumn in A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and coloumn in B: ");
    scanf("%d %d", &r2, &c2);

    //Input
    printf("Enter elements in A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements in B: \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("B[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //LOGIC OF MULTIPLICATION
    if(c1==r2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                c[i][j]=0;
                 
                for(int k=0; k<c1; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("The result of multiplication of A&B is \n");
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}