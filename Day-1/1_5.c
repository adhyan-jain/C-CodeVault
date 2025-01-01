#include <stdio.h>
// Program to swap two numbers with a temporary variable
int main() {
    int a,b;
    int temp;
    // Taking user input
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;
    // Printing the result
    printf("After swapping :\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}