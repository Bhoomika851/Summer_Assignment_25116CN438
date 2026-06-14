#include<stdio.h>
int main(){
    int row, col;

    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the coloumn: ");
    scanf("%d", &col);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}