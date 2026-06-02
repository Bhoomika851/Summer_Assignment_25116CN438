#include<stdio.h>
int main(){
    int sum=0, n, rem;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n!=0){
        rem = n%10;
        sum+=rem;
        n = n/10;
    }
    printf("The sum of digits: %d", sum);
    return 0;
}