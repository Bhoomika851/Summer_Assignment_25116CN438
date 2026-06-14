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

    while(n>0){#include<stdio.h>
int rem, sum=0, org;
int isArmstrong(int num){
    org=num;
    if(num<0) return 0;
    while(num>0){
        rem = num%10;
        sum = sum + rem*rem*rem;
        num= num/10;
    }
    if(org==num){
        return 1;
    }
    else{
        return 0;
    }
} 
int main(){
    int x;
    printf("Enter the no.: ");
    scanf("%d", &x);
    if(isArmstrong(x)){
        printf("%d is Armstrong.", x);
    }
    else{
        printf("%d is not Armstrong.", x);
    }
    return 0;
}
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