#include <stdio.h>

int main() {
    char str[200];
    // Initialize all 256 positions to 0
    int freq[256] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Count occurrences of each character
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        // Cast character to its integer ASCII value to use as index
        int index = (int)str[i]; 
        freq[index]++;
    }

    //Print frequencies of all present characters
    printf("\n--- Character Frequencies ---\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            // Convert index back to its char representation for printing
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}