#include <stdio.h>

int main() {
    int n, i, choice;
    int a[100];
    int sum = 0, max, min;
    printf("enter number of elements ");
    scanf("%d", &n);
    printf("enter array elements");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    do {
        printf("\n    ARRAY MENU    \n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("enter choice ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("array ");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += a[i];
                printf("Sum = %d\n", sum);
                break;
            case 3:
                max = a[0];
                for(i = 1; i < n; i++)
                    if(a[i] > max)
                        max = a[i];
                printf("maximum = %d\n", max);
                break;
            case 4:
                min = a[0];
                for(i = 1; i < n; i++)
                    if(a[i] < min)
                        min = a[i];
                printf("minimum = %d\n", min);
                break;
            case 5: {
                int key, found = 0;
                printf("enter element to search ");
                scanf("%d", &key);
                for(i = 0; i < n; i++) {
                    if(a[i] == key) {
                        printf("element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("element not found\n");
                break;
            }
            case 6:
                printf("exiting\n");
                break;
            default:
                printf("invalid choice\n");
        }
    } while(choice != 6);
return 0;
}