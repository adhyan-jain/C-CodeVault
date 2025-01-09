// Sort an array of strings alphabetically (custom + strcmp())
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char tmp[100];

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character after entering the number

    char str[n][100];        // Input array of strings
    char sortedArr[n][100];  // Array to store the manually copied strings for comparison

    // Input the strings
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        // Remove the newline character added by fgets
        if (str[i][strlen(str[i]) - 1] == '\n') {
            str[i][strlen(str[i]) - 1] = '\0';
        }
    }

    // Copy the input array to the manually sorted array
    for (i = 0; i < n; i++) {
        strcpy(sortedArr[i], str[i]);
    }

    // Sort the array of strings using Bubble Sort and strcmp()
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                // Swap the strings if they are in the wrong order
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }

    // Output the custom sorted array
    printf("\nSorted array of strings (custom sorting):\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    // Sort the manually copied array for comparison
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(sortedArr[j], sortedArr[j + 1]) > 0) {
                // Swap the strings in the manually copied array
                strcpy(tmp, sortedArr[j]);
                strcpy(sortedArr[j], sortedArr[j + 1]);
                strcpy(sortedArr[j + 1], tmp);
            }
        }
    }

    // Output the manually sorted array
    printf("\nManually sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", sortedArr[i]);
    }

    // Compare the custom sorted array with the manually sorted array
    int match = 1;
    for (i = 0; i < n; i++) {
        if (strcmp(str[i], sortedArr[i]) != 0) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("\nBoth sorting methods produced the same result.\n");
    } else {
        printf("\nBoth sorting methods produced different results.\n");
    }

    return 0;
}
