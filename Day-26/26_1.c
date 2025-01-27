/*
Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format

The only line contains 2 space-separated integers, n and k.
*/

#include <stdio.h>

// Function to calculate the maximum values
void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            // Calculate and compare bitwise AND
            int and_result = i & j;
            if (and_result < k && and_result > max_and) {
                max_and = and_result;
            }

            // Calculate and compare bitwise OR
            int or_result = i | j;
            if (or_result < k && or_result > max_or) {
                max_or = or_result;
            }

            // Calculate and compare bitwise XOR
            int xor_result = i ^ j;
            if (xor_result < k && xor_result > max_xor) {
                max_xor = xor_result;
            }
        }
    }

    // Print the results
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
