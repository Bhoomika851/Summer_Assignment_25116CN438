//Sum of diagonal of Matrix
#include<stdio.h>
int main(){
    int a[20][20], r1, c1, sum=0;
    printf("Enter rows and coloumns: ");
    scanf("%d %d", &r1, &c1);

    if(r1 != c1) {
        printf("Error: Diagonals only exist in a Square Matrix (Rows must equal Columns)!\n");
        return 0;
    }

    //input of A
    printf("Enter the elements in A: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //logic
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            if(i==j){
                sum += a[i][j];
            }
        }
    }

    //output
    printf("The sum of diagonal is: %d", sum);
    return 0;
}