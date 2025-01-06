// Swap two numbers using pass by value
#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping (pass by value):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swapByValue(num1, num2);

    printf("After swapping (pass by value):\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}