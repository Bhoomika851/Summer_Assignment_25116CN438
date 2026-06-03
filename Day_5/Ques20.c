#include<stdio.h>
int main(){
    int n, count, i, j, l=0;
    printf("Enter the no.:");
    scanf("%d", &n);

    for(i=2; i<=n; i++){
        if(n%i==0){
            count=0;
            for(j=1; j<=i; j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                l=i;
            }
        }

    }
    printf("%d is largest prime factor", l);
    return 0;
}