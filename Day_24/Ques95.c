//To find longest word in a String
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    
    int current_start = 0, current_len = 0;
    int max_start = 0, max_len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        char ch = str[i];

        // A word ends if we hit a space, tab, newline, or the null terminator
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            
            // If the word we just finished is longer than our record
            if (current_len > max_len) {
                max_len = current_len;
                max_start = current_start;
            }
            
            // Reset current word length for the next upcoming word
            current_len = 0;
            current_start = i + 1; // The next word starts at the next index
        } 
        else {
            // It's a valid character, increase current word length
            current_len++;
        }

        if (ch == '\0') {
            break;
        }
        
        i++;
    }

    // Print the longest word
    printf("The longest word is: ");
    for (i = max_start; i < max_start + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", max_len);

    return 0;
}