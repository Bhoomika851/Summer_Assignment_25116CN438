#include <stdio.h>
int main(){
    int choice;
    float balance=10000,amount;
    do{
        printf("1. check balance\n");
        printf("2. deposit\n");
        printf("3. withdraw\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("balance = %.2f",balance);
                break;
            case 2:
                printf("enter amount to deposit: ");
                scanf("%f",&amount);
                balance=balance+amount;
                printf("updated balance = %.2f",balance);
                break;
            case 3:
                printf("enter amount to withdraw: ");
                scanf("%f",&amount);
                if(amount<=balance){
                    balance=balance-amount;
                    printf("updated balance = %.2f",balance);
                }
                else{
                    printf("insufficient balance\n");
                }
                break;
            case 4:
                printf("thank you\n");
                break;
            default:
                printf("invalid choice\n");
        }
    }while(choice!=4);
return 0;
}