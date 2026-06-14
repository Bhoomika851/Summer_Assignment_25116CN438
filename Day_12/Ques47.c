#include<stdio.h>
int num1=0, num2=1, num3;
void fibonacci(int num){
    for(int i=1; i<=num; i++){
        printf("%d ", num1);
        num3 = num1+num2;
        num1=num2;
        num2=num3;
    }
    printf("\n");
}
int main(){
    int x;
    printf("Enter the no.: ");
    scanf("%d", &x);
    
    fibonacci(x);
    return 0;
}