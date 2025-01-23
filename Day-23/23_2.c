// Q2: Write a program to check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    for (int i = 0; i < strlen(str) - 1; i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) return 0;

    sortString(str1);
    sortString(str2);

    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
