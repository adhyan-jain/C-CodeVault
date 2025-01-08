// Concatenate Two Strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1, *str2, *result;
    int len1, len2;

    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    printf("Enter the length of the second string: ");
    scanf("%d", &len2);

    str1 = (char *)malloc((len1 + 1) * sizeof(char));
    str2 = (char *)malloc((len2 + 1) * sizeof(char));

    if (str1 == NULL || str2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated String: %s\n", result);

    free(str1);
    free(str2);
    free(result);
    return 0;
}
