#include<stdio.h>
int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    else {
    return n* fact(n-1);
    }
}
int main (){
    int a,p;
    printf ("enter a number");
    scanf ("%d",&a);
    p = fact(a);
    printf ("factorial= %d",p);
    return 0;
}