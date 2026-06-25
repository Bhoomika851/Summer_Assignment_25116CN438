//Row wise sum

#include<stdio.h>
int main(){
    int a[20][20], r, c;
    printf("Enter rows aand coloumns: ");
    scanf("%d %d", &r, &c);

    //input of elements
    printf("Enter the elements");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //logic of row wise sum
    for(int i=0; i<r; i++){
        int rowSum =0;
        for(int j=0; j<c; j++){
            rowSum+= a[i][j];
        }
        printf("Sum of row %d is: %d\n", i, rowSum);

    }

    return 0;
}