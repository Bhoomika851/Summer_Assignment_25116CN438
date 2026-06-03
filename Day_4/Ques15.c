#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,sum = 0, org;
    printf("Enter the number:");
    scanf("%d", &n);
    org = n;
    while(n!=0){
        rem = n%10;
        sum = sum + rem * rem * rem;
        n = n/10;
    } 
    if(sum == org){
        printf("%d is an armstrong number", org);
    }
    else{
        printf("not an armstrong number");
    }
    return 0;
}