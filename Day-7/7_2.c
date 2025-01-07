// Program to perform addition of two numbers using pointers
#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;
    printf("Sum = %d\n", sum);

    return 0;
}
