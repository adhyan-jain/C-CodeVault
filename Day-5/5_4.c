// Reverse a string (custom + strrev())
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result1[100], result2[100];
    int i, len;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets() if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Reverse the string manually (without using predefined functions)
    len = strlen(str);
    for (i = 0; i < len; i++) {
        result1[i] = str[len - 1 - i];
    }
    result1[i] = '\0'; // Null-terminate the reversed string

    // Reverse using strrev() if available
    strcpy(result2, str); // Copy the original string into result2
    strrev(result2); // Reverse using strrev()

    // Print the results
    printf("Reversed string using custom method: %s\n", result1);
    printf("Reversed string using strrev(): %s\n", result2);

    // Compare the results
    if (strcmp(result1, result2) == 0) {
        printf("Both methods produced the same result.\n");
    } else {
        printf("Both methods produced different results.\n");
    }

    return 0;
}
