#include<stdio.h>
int main(){
    long long binary, org;
    int dec=0, base=1,rem;

    printf("Enter the binary no.:");
    scanf("%lld", &binary);
    org = binary;

    while(binary>0){
        rem = binary%10;
        dec = dec + (rem*base);
        binary = binary/10;
        base*=2;
    }

    printf("The decimal no. of %lld is: %d", org, dec);
    return 0;
}