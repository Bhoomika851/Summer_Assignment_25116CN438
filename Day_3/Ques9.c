#include<stdio.h>
int main(){
    int i, n, flag = 0;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n<=1){
        flag=1;
    }
    else{
        for(i=2; i<=n/2; i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("No. is prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}