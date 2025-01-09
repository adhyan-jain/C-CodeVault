// Find the length of a string (custom + library function)


#include <string.h>
#include<stdio.h>

int main() {
    char str[]="Hello, World!";
    int strc = 0, strf;
    // length of a string using a custom function
    while (str[strc] != '\0') {
        strc++;
    }
    // length of a string using the library function
    strf= strlen(str);
    printf("Custom function: Length of '%s' is %d\n", str, strc);
    printf("Library function: Length of '%s' is %d\n", str, strf);
    return 0;
}