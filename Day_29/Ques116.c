#include <stdio.h>
struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};
int main() {
    struct Item item[100];
    int n = 0, choice, i, id, found;
    do {
        printf("\n   INVENTORY MENU  \n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("enter choice ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("enter item id ");
                scanf("%d", &item[n].id);
                printf("enter item name ");
                scanf("%s", item[n].name);
                printf("enter quantity ");
                scanf("%d", &item[n].quantity);
                printf("enter price ");
                scanf("%f", &item[n].price);
                n++;
                printf("item added \n");
                break;
            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for(i =0;i< n;i++) {
                    printf("%d\t%s\t%d\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;
            case 3:
                found = 0;
                printf("enter item id to search ");
                scanf("%d", &id);
                for(i =0;i<n;i++){
                    if(item[i].id == id){
                        printf("\nfound\n");
                        printf("id= %d\n", item[i].id);
                        printf("name= %s\n", item[i].name);
                        printf("quantity= %d\n", item[i].quantity);
                        printf("price= %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("not found\n");
                break;
            case 4:
                found = 0;
                printf("enter item id ");
                scanf("%d", &id);
                for(i =0;i <n;i++){
                    if(item[i].id == id){
                        printf("enter new quantity ");
                        scanf("%d", &item[i].quantity);
                        printf("quantity updated\n");
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    printf("item not found\n");
                break;
            case 5:
                printf("exiting\n");
                break;
            default:
                printf("invalid choice\n");
        }
    } while(choice != 5);
    return 0;
}