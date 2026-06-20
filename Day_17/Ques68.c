#include <stdio.h>

int main() {
    int arr1[20], arr2[20], common_arr[20], n1, n2, k = 0;

    printf("Enter number of elements for both arrays: ");
    scanf("%d %d", &n1, &n2);

    printf("Enter elements for 1st array: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for 2nd array: ");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Main logic to find common elements
    for(int i = 0; i < n1; i++) {
        int isCommon = 0;

        // Check if arr1[i] is present in arr2
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                isCommon = 1; 
                break;
            }
        }

        // If found in both, make sure it's not already added to common_arr
        if(isCommon == 1) {
            int isDuplicate = 0;
            for(int m = 0; m < k; m++) {
                if(arr1[i] == common_arr[m]) {
                    isDuplicate = 1;
                    break;
                }
            }

            // If it's a fresh common element, store it
            if(isDuplicate == 0) {
                common_arr[k] = arr1[i];
                k++;
            }
        }
    }

    // Printing the output
    if(k == 0) {
        printf("No common elements found.\n");
    } else {
        printf("The common elements are: ");
        for(int i = 0; i < k; i++) {
            printf("%d ", common_arr[i]);
        }
        printf("\n");
    }

    return 0;
}