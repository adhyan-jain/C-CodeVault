// Implementing a menudriven calculator using switch-case
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        // Displaying menu
        printf("\n--- Menu-Driven Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exiting
        if (choice == 5) {
            printf("Exiting the calculator\n");
            break;
        }

        // Taking user input
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Performing operation based on user choice
        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Division by zero is not allowed!\n");
                }
                break;
            default: // Invalid choice
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }
    }
    return 0;
}