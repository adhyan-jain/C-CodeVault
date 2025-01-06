#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string
void reverse(char str[], char rev[], int len, int index) {
    if (len == 0) {
        rev[index] = '\0';  // Add null terminator at the end
        return;
    }
    rev[index] = str[len - 1];  // Place the last character of 'str' into 'rev'
    reverse(str, rev, len - 1, index + 1);  // Move to the next index
}

int main() {
    char str[100], rev[100];
    printf("Enter string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = 0;  // Remove the trailing newline character
    int len = strlen(str);

    if (len == 0) {
        printf("No input provided.\n");
        return 1;
    }

    reverse(str, rev, len, 0);  // Start the recursive function with index 0
    printf("Reversed string: %s\n", rev);

    return 0;
}
