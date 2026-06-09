#include<stdio.h>
int main(){
    int x,n; //x= base & n=power
    long long result=1;

    printf("Enter the base:");
    scanf("%d", &x);
    printf("Enter the power:");
    scanf("%d", &n);
    int org_x = x;
    int org_n = n;

    while(n>0){
        //if n is odd
        if(n%2==1){
            result = result*x;
            n = n-1;
        }
        //for even no.
        else{
            x = x*x;
            n = n/2;
        }
    }
    printf("%d raised to the power of %d is: %lld ", org_x, org_n, result);
    return 0;
}