// Q3: Write a program to implement a function that reverses the words in a string.

#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int n = strlen(str);
    char result[n + 1];
    int resultIndex = 0, wordEnd = n;

    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            int wordStart = (i == 0) ? i : i + 1;
            for (int j = wordStart; j < wordEnd; j++) {
                result[resultIndex++] = str[j];
            }
            if (i > 0) {
                result[resultIndex++] = ' ';
            }
            wordEnd = i;
        }
    }
    result[resultIndex] = '\0';
    printf("Reversed words: %s\n", result);
}

int main() {
    char str[] = "C programming is fun";
    reverseWords(str);

    return 0;
}
