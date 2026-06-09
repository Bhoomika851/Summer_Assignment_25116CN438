#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter the no:");
    scanf("%d", &n);

    while(n>0){
        n = n & (n-1);
        count++;
    }
    printf("The count of set bits in %d is: %d",n , count);
    return 0;

}