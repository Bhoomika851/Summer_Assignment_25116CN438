#include<stdio.h>
int fib(int n){
    if (n==0 || n==1){
        return n;
    }
    else {
    return fib(n-1)+fib(n-2);
    }
}
int main (){
    int i,a,num;
    printf ("enter number of terms");
    scanf ("%d",&num);
    for (i=0;i<=num;i++){
        a = fib(i);
        printf ("%d\t",a);
    }
    return 0;
}