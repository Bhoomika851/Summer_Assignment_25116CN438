#include<stdio.h>
int main(){
    int start, end, n, rem, sum, org;
    printf("Enter the range:");
    scanf("%d %d", &start, &end);

    printf("Armstrong number are: \n");
    for(n=start;n<=end;n++){
        org=n;
        sum=0;
        while(org!=0){
            rem = org%10;
            sum = sum + rem*rem*rem;
            org = org/10;
        }
        if(sum == n){
            printf("%d\n", n);
        }
    }
    return 0;
}