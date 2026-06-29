#include <stdio.h>
#include <string.h>

char names[5][50];
int quantities[5];
float prices[5];
int count = 0;

void addItem() {
    if (count < 5) {
        printf("Enter item name: ");
        fgets(names[count], 50, stdin);
        names[count][strcspn(names[count], "\n")] = '\0';

        printf("Enter quantity: ");
        scanf("%d", &quantities[count]);

        printf("Enter price: ");
        scanf("%f", &prices[count]);

        count++;
        printf("Item Added\n");
    } else {
        printf("Inventory Full\n");
    }
}

void displayInventory() {
    if (count == 0) {
        printf("Inventory Empty\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID %d: %s | Qty: %d | Price: %.2f\n", i + 1, names[i], quantities[i], prices[i]);
    }
}

void updateStock() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    
    if (id > 0 && id <= count) {
        printf("Enter new quantity: ");
        scanf("%d", &quantities[id - 1]);
        printf("Stock Updated\n");
    } else {
        printf("Invalid ID\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Item\n2. Display Inventory\n3. Update Stock\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            addItem();
        } 
        else if (choice == 2) {
            displayInventory();
        } 
        else if (choice == 3) {
            updateStock();
        } 
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}