#include<stdio.h>
int main(){
    int n, num;
    printf("Enter the no.: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int space=1; space <= n-i; space++){
            printf("  ");
        }
        num = 1;
        for(int j=1; j<=i; j++){
            printf("%d ", num);
            num++;
        }
        num=num-2;
        for(int j=1; j<i; j++){
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}