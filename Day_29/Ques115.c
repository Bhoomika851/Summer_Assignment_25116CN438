#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int choice;
    printf("enter first string ");
    scanf("%s", str1);
    do {
        printf("\n     STRING MENU     \n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("enter choice ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("length = %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("copied string = %s\n", str2);
                break;
            case 3:
                printf("enter second string ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("concatenated string = %s\n", str1);
                break;
            case 4:
                printf("enter second string ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("strings are equal\n");
                else
                    printf("strings are not equal\n");
                break;
            case 5: {
                int i, len;
                char temp;
                len = strlen(str1);
                for(i = 0; i < len / 2; i++) {
                    temp = str1[i];
                    str1[i] = str1[len - i - 1];
                    str1[len - i - 1] = temp;
                }
                printf("reversed string = %s\n", str1);
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