#include <stdio.h>

int main() {
    int a, b;
    // Taking user input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swapping without temporary variable
    a = a + b;
    b = a - b;  // b holds the value of original a
    a = a - b;  // a holds the value of original b
    // Printing the result
    printf("After swapping :\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}