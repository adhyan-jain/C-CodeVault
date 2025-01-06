// Swap two numbers using pass by reference
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}