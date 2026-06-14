#include<stdio.h>
int rem, rev=0, org;
int palindrome(int num){
    org=num;
    if(num<0)
    return 0;
    while(num>0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if(org==rev){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    if(palindrome(x)){
        printf("%d is Palindome.", x);
    }
    else{
        printf("%d is not Palindrome.", x);
    }
    return 0;
}