#include<stdio.h>
int rem, sum=0, org;
int isArmstrong(int num){
    org=num;
    if(num<0) return 0;
    while(num>0){
        rem = num%10;
        sum = sum + rem*rem*rem;
        num= num/10;
    }
    if(org==sum){
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