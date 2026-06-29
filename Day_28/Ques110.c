#include <stdio.h>
struct account{
    int accno;
    char name[20];
    float balance;
};
int main(){
    struct account a;
    printf("enter account number ");
    scanf("%d",&a.accno);
    printf("enter account holder name ");
    scanf("%s",a.name);
    printf("enter balance ");
    scanf("%f",&a.balance);
    printf("account details\n");
    printf("account number = %d\n",a.accno);
    printf("name = %s\n",a.name);
    printf("balance = %.2f\n",a.balance);
    return 0;
}