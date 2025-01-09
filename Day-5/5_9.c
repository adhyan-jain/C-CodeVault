// Replace all occurrences of a character in a string (custom only)
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], old_char, new_char;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Input the character to replace and the new character
    printf("Enter the character to replace: ");
    scanf("%c", &old_char);
    getchar(); // To consume the newline character from previous input
    printf("Enter the new character: ");
    scanf("%c", &new_char);

    // Replace all occurrences of old_char with new_char
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == old_char) {
            str[i] = new_char;
        }
        i++;
    }

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
