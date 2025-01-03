// Program to find the highest common factor (HCF) and least common multiple (LCM) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, hcf = 1, lcm, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    temp1 = num1; // Storing original value of num1
    temp2 = num2; // Storing original value of num2

    int smallest = (num1 < num2) ? num1 : num2;

    // Check common divisors of both numbers
    for (int i = 1; i <= smallest; i++) {
        if (num1 % i == 0 && num2 % i == 0) { // i is a common divisor
            hcf = i; // Update hcf if i is a common divisor
        }
    }

    // Calculate LCM using the formula LCM = (num1 * num2) / HCF
    lcm = (temp1 * temp2) / hcf;

    // Print the results
    printf("HCF of %d and %d is: %d\n", temp1, temp2, hcf);
    printf("LCM of %d and %d is: %d\n", temp1, temp2, lcm);

    return 0;
}
