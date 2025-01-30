/*
Implement a Bit Manipulation Calculator
Problem Statement
Write a C program that allows the user to perform the following bitwise operations on two integers:

AND (&)
OR (|)
XOR (^)
Left Shift (<<)
Right Shift (>>)

Constraints:

Use function pointers to select the operation dynamically.
Input two integers from the user.
Allow the user to specify the operation as a choice.
*/

#include <stdio.h>

// Function prototypes
int andOperation(int a, int b) { return a & b; }
int orOperation(int a, int b) { return a | b; }
int xorOperation(int a, int b) { return a ^ b; }
int leftShift(int a, int b) { return a << b; }
int rightShift(int a, int b) { return a >> b; }

int main() {
    int a, b, choice;
    int (*operation)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose an operation:\n");
    printf("1. AND\n2. OR\n3. XOR\n4. Left Shift\n5. Right Shift\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: operation = andOperation; break;
        case 2: operation = orOperation; break;
        case 3: operation = xorOperation; break;
        case 4: operation = leftShift; break;
        case 5: operation = rightShift; break;
        default: printf("Invalid choice!\n"); return 1;
    }

    printf("Result: %d\n", operation(a, b));
    return 0;
}
