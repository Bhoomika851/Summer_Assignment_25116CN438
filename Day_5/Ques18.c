#include<stdio.h>
int main(){
    int n, fact, sum=0, rem, org;
    printf("Enter the no:");
    scanf("%d", &n);

    org = n;
    while(n!=0){
        rem = n%10;
        fact=1;
        for(int i=1; i<=rem; i++){
            fact = fact*i;
        }
        sum +=fact;
        n =n/10;
    }
    if(sum==org){
        printf("No. is Strong");
    }
    else{
        printf("Not strong");
    }
    return 0;
}