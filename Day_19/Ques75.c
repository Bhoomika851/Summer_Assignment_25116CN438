//Transpose of Matrix
#include<stdio.h>
int main(){
    int a[20][20], r1, c1, trans[20][20];
    printf("Enter rows and coloumns: ");
    scanf("%d %d", &r1, &c1);

    //input of A
    printf("Enter the elements in A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //transpose logic
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            trans[j][i] = a[i][j];
        }
    }    

    //Print output
    printf("The transpose of A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}