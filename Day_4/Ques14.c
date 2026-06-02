#include<stdio.h>
int main(){
    int t1, t2, temp, n;
    printf("Enter the number:");
    scanf("%d", &n);
    t1 = 0;
    t2 = 1;
    if(n==1)
    printf("nth Fibonacci term is %d", t1);
    else if(n==2)
    printf("nth Fibonacci term is %d", t2);
    else{
        for(int  i=3; i<=n; i++){
            temp = t1 + t2;
            t1 = t2;
            t2 = temp;
            }
        printf("nth Fibonacci term is %d", t2);
        }
    return 0;
}