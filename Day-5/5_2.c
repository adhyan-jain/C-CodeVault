// Concatenate two strings (custom + strcat())
#include <stdio.h>
#include <string.h>

int main() {
    int equal = 1;
    char str1[100], str2[100], result1[200], result2[200];
    int i = 0, j = 0;

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Remove newline character if present
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character if present
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    // Concatenate without using strcat()
    i = 0;
    while (str1[i] != '\0') {
        result1[i] = str1[i];
        i++;
    }
    
    // Append str2 to result1
    j = 0;
    while (str2[j] != '\0') {
        result1[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result1
    result1[i] = '\0';

    printf("Concatenated String without using strcat(): %s\n", result1);
    
    // Concatenate using strcat()
    strcpy(result2, str1);
    strcat(result2, str2);
    printf("Concatenated string using strcat(): %s\n", result2);

    // Compare the results
    for (int i = 0; i < strlen(result1); i++) {
        if (result1[i] != result2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal == 1) {
        printf("Both concatenation methods produce the same result.\n");
    } else {
        printf("Both concatenation methods do not produce the same result.\n");
    }
    
    return 0;
}