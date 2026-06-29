#include <stdio.h>
int rn=0;
int rev(int n){
    if (n==0){
        return rn;
    }
    else{
    rn = rn*10 + n%10;
        return rev( n/10);
    }
}
int main(){
    int a,r;
    printf("enter a number");
    scanf ("%d",&a);
    r = rev(a);
    printf("reverse of the number is %d",r);
    return 0;
}