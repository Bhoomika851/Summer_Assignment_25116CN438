#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Arrays to hold the student data
    char names[n][50];
    int roll_no[n];
    float marks[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Entering Details for Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &roll_no[i]);
        
        getchar(); 

        printf("Enter Name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        
        int len = 0;
        while (names[i][len] != '\0') {
            if (names[i][len] == '\n') {
                names[i][len] = '\0';
                break;
            }
            len++;
        }

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n================ STUDENT RECORDS ================\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", roll_no[i], names[i], marks[i]);
    }
    printf("=================================================\n");

    return 0;
}