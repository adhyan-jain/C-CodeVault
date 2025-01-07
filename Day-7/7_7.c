// Implement a function to calculate the factorial of a number using pointers
#include <stdio.h>

int factorial(int *n) {
    if (*n == 0 || *n == 1) {
        return 1;
    } else {
        return *n * factorial(--(*n));
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(&num));

    return 0;
}
