// Resize an Array using realloc

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_size, *arr;

    printf("Enter the initial size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);

    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (new_size > n) {
        printf("Enter additional elements: ");
        for (int i = n; i < new_size; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Resized Array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
