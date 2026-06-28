//Count words
#include<stdio.h>
int main(){
    char str[100];
    int wordCount = 0;
    int inWord=0;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        // If current character is a space, tab, or blank space
        if (str[i] == ' ' || str[i] == '\t') {
            inWord = 0; // We are no longer inside a word
        } 
        // If current character is a visible text symbol
        else if (inWord == 0) {
            inWord = 1;   // Flip the switch to "inside a word"
            wordCount++;  // Count this new word!
        }
    }

    printf("Total word count: %d\n", wordCount);

    return 0;
}