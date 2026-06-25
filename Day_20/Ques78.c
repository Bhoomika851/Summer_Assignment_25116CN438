//To check the Symmetry of matrix

#include<stdio.h>
int main (){
    int r1, c1, a[20][20];

    printf("Enter row and coloumn: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int IsSymm = 1; //it is symmetric
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            if(a[i][j]!=a[j][i]){
                IsSymm = 0;
                break;
            }
        }
        if(IsSymm==0){
            break;
        }
    }
    if(IsSymm==1){
        printf("SYMMETRIC");
    }
    else{
        printf("NON SYMMETRIC");
    }
    return 0;
}