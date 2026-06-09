#include<stdio.h>
#include<math.h>
int main(){
    int start, end, count, n, rem, temp, org;
    double sum;
    printf("Enter the range:");
    scanf("%d %d", &start, &end);

    printf("Armstrong number are: \n");
    for(n=start;n<=end;n++){
        temp=n;
        count=0;
        while(temp!=0){
            count++;
            temp/=10;
        }
        org=n;
        sum=0;
        while(org!=0){
            rem = org%10;
            sum = sum + pow(rem,count);
            org = org/10;
        }
        if((int)sum == n){
            printf("%d\n", n);
        }
    }
    return 0;
}