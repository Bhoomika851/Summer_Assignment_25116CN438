#include<stdio.h>
int primeis(int n){
     if(n<=1){
        return 1;
    }
    else{
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                return 1;
                break;
            }
        }
    }
    return 0;
}
int main(){
    int x;
    printf("Enter the no.: ");
    scanf("%d", &x);

    if (primeis(x) == 0) {
        printf("%d is a prime number.\n", x);
    } else {
        printf("%d is not a prime number.\n", x);
    }

    return 0;
}