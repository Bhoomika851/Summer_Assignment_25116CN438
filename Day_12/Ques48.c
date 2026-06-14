#include<stdio.h>
int sum=0;
int IsPerfect(int num){
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            sum += i;
        
        }
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    printf("Enter the no.:");
    scanf("%d", &x);

    if(IsPerfect(x)){
        printf("%d is Perfect.", x);
    }
    else{
        printf("%d is not Perfect.", x);
    }
}