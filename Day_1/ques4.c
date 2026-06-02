#include<stdio.h>
int main(){
    int count = 0, original, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    original=n;
    while(n!=0){
        n=n/10;
        count++;
        printf("Count of digits in %d is %d", original, count);
    }
    return 0;
}