#include<stdio.h>
int main(){
    int n;
    printf("Enter the no.: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int space=1; space <= n-i; space++){
            printf("  ");
        }
        char ch= 'A';
        for(int j=1; j<=i; j++){
            printf("%c ", ch);
            ch++;
        }
        ch =ch-2;
        for(int j=1; j<i; j++){
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}