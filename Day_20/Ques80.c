//Coloumn wise Sum

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

    //logic of col wise sum
    for(int i=0; i<c; i++){
        int colSum =0;
        for(int j=0; j<r; j++){
            colSum+= a[j][i];
        }
        printf("Sum of col %d is: %d\n", i, colSum);

    }

    return 0;
}