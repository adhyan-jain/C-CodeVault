// Compute the sum of the first n natural numbers using recursion
#include <stdio.h>

// Function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    } else {
        // Recursive case: n + sum of first (n-1) natural numbers
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is a positive integer
    if (n > 0) {
        int sum = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}