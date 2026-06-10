#include<stdio.h>
int start=1;
int fact(int n){
    for( int i=1; i<=n; i++){
        start = start*i;
    }
    return start;
}
int main(){
    int x, output;
    printf("Enter no: ");
    scanf("%d", &x);

    output= fact(x);
    printf("The factorial of %d is: %d", x, output);
    return 0;
}