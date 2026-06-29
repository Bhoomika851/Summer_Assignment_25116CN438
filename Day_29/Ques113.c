#include <stdio.h>
int main() {
    int choice;
    float a, b;
    do {
        printf("\n     CALCULATOR MENU     \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("enter your choice ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("enter two numbers ");
            scanf("%f %f", &a, &b);
        }
        switch (choice) {
            case 1:
                printf("result = %.2f\n", a + b);
                break;
            case 2:
                printf("result = %.2f\n", a - b);
                break;
            case 3:
                printf("result = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("result = %.2f\n", a / b);
                else
                    printf("division by zero is not possible\n");
                break;
            case 5:
                printf("exiting\n");
                break;
            default:
                printf("invalid choice\n");
        }
    } while (choice != 5);
    return 0;
}