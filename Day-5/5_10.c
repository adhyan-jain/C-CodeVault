// Count the number of words in a string (custom only)
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int word_count = 0, i = 0;
    int in_word = 0;  // A flag to track if we're inside a word

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0') {
        // Check if the current character is a space or punctuation
        if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '!') && in_word) {
            word_count++;  // End of a word, increment the count
            in_word = 0;  // Reset the flag
        } else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '.' && str[i] != ',' && str[i] != ';' && str[i] != '!') {
            in_word = 1;  // We're inside a word
        }
        i++;
    }

    // If the string ends while we're still inside a word, count the last word
    if (in_word) {
        word_count++;
    }

    printf("The number of words in the string is: %d\n", word_count);

    return 0;
}
