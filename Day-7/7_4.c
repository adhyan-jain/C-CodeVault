// Program that demonstrates pointer arithmetic

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer Arithmetic Example:\n");

    printf("Value at ptr = %d\n", *ptr);
    printf("Value at ptr + 1 = %d\n", *(ptr + 1));
    printf("Value at ptr + 2 = %d\n", *(ptr + 2));
    printf("Value at ptr + 3 = %d\n", *(ptr + 3));

    return 0;
}
