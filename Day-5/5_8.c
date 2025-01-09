// Find the first occurrence of a character in a string (custom + strchr())
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Input the character to search for
    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Find the first occurrence using custom method
    int i = 0;
    int custom_index = -1;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            custom_index = i;
            break;
        }
        i++;
    }

    if (custom_index != -1) {
        printf("Character '%c' found at index %d (custom method).\n", ch, custom_index);
    } else {
        printf("Character '%c' not found (custom method).\n", ch);
    }

    // Find the first occurrence using a basic loop (instead of strchr)
    int strchr_index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            strchr_index = i;
            break;
        }
    }

    if (strchr_index != -1) {
        printf("Character '%c' found at index %d (basic method).\n", ch, strchr_index);
    } else {
        printf("Character '%c' not found (basic method).\n", ch);
    }

    return 0;
}
