// Program to calculate the length of a string using pointers

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[] = "Hello, World!";
    printf("Length of string: %d\n", stringLength(str));

    return 0;
}
