#include <stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n%10 + sum(n/10);
    }
}
int main(){
    int a,s;
    printf("enter a number");
    scanf ("%d",&a);
    s = sum(a);
    printf("sum of the digits is %d",s);
    return 0;
}