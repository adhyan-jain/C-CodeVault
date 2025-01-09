// Check if a string is a palindrome (custom + strrev())
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int i, len, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets() if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Check if the string is a palindrome manually (custom method)
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // Set to 0 if mismatch is found
            break;
        }
    }

    // Output the result of the custom method
    if (isPalindrome) {
        printf("The string is a palindrome (custom method).\n");
    } else {
        printf("The string is not a palindrome (custom method).\n");
    }

    // Reverse the string using strrev() if available
    strcpy(reversedStr, str); // Copy the original string into reversedStr
    strrev(reversedStr); // Reverse using strrev()

    // Check if the reversed string matches the original string
    if (strcmp(str, reversedStr) == 0) {
        printf("The string is a palindrome (strrev method).\n");
    } else {
        printf("The string is not a palindrome (strrev method).\n");
    }

    return 0;
}
