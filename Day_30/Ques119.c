#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    int ids[5];
    float salaries[5];
    int count = 0;
    int choice, searchId, found;

    while (1) {
        printf("\n1. Add Employee\n2. Display All Employees\n3. Search Employee by ID\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            if (count < 5) {
                printf("Enter ID: ");
                scanf("%d", &ids[count]);
                getchar(); 

                printf("Enter Name: ");
                fgets(names[count], sizeof(names[count]), stdin);
                names[count][strcspn(names[count], "\n")] = '\0';

                printf("Enter Salary: ");
                scanf("%f", &salaries[count]);
                
                count++;
                printf("Employee Added Successfully\n");
            } else {
                printf("Database Full\n");
            }
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No Employee Records Found\n");
            } else {
                printf("\nID\tName\t\tSalary\n");
                printf("---------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%-15s\t%.2f\n", ids[i], names[i], salaries[i]);
                }
            }
        } 
        else if (choice == 3) {
            if (count == 0) {
                printf("No Records to Search\n");
            } else {
                printf("Enter ID to Search: ");
                scanf("%d", &searchId);
                found = 0;

                for (int i = 0; i < count; i++) {
                    if (ids[i] == searchId) {
                        printf("\nRecord Found:\n");
                        printf("ID: %d\nName: %s\nSalary: %.2f\n", ids[i], names[i], salaries[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Employee ID Not Found\n");
                }
            }
        } 
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}