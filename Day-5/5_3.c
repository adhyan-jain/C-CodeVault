// Compare two strings (custom + strcmp()).
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, equal = 1;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters added by fgets() if present
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    // Compare strings without using strcmp()
    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    // Check if both strings are of the same length
    if (str1[i] != '\0' || str2[i] != '\0') {
        equal = 0;
    }

    // Output the result of the custom comparison
    if (equal == 1) {
        printf("The strings are the same (custom method).\n");
    } else {
        printf("The strings are different (custom method).\n");
    }

    // Compare strings using strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("The strings are the same (strcmp method).\n");
    } else {
        printf("The strings are different (strcmp method).\n");
    }

    return 0;
}