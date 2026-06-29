#include <stdio.h>
#include <string.h>

int main() {
    char books[5][50];
    int available[5] = {0}; 
    int count = 0;
    int choice, id;

    while (1) {
        printf("\n1. Add Book\n2. Display Books\n3. Issue Book\n4. Return Book\n5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            if (count < 5) {
                printf("Enter title: ");
                fgets(books[count], sizeof(books[count]), stdin);
                books[count][strcspn(books[count], "\n")] = '\0';
                available[count] = 1;
                count++;
            } else {
                printf("Library Full\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No Books\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("ID %d: %s [%s]\n", i + 1, books[i], available[i] ? "Available" : "Issued");
                }
            }
        } 
        else if (choice == 3) {
            printf("Enter ID: ");
            scanf("%d", &id);
            if (id > 0 && id <= count && available[id - 1] == 1) {
                available[id - 1] = 0;
                printf("Book Issued\n");
            } else {
                printf("Unavailable or Invalid ID\n");
            }
        } 
        else if (choice == 4) {
            printf("Enter ID: ");
            scanf("%d", &id);
            if (id > 0 && id <= count && available[id - 1] == 0) {
                available[id - 1] = 1;
                printf("Book Returned\n");
            } else {
                printf("Invalid Return\n");
            }
        } 
        else if (choice == 5) {
            break;
        }
    }
    return 0;
}