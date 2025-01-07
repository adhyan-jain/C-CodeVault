// Program to find the largest number in an array using pointers.

#include <stdio.h>

int findLargest(int *arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    return largest;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Largest number in array: %d\n", findLargest(arr, size));

    return 0;
}
