// Count vowels in a string (custom only)
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets(), if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Call the function to count vowels
    int count = 0, i = 0;
    
    // Iterate through each character of the string
    while (str[i] != '\0') {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++; // Increment the count if it's a vowel
        }
        i++; // Move to the next character
    }
    
    // Output the result
    printf("Number of vowels in the string: %d\n", count);
    
    return 0;
}
