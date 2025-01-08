// Copy an Array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *copy;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    copy = (int *)malloc(n * sizeof(int));
    if (arr == NULL || copy == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nCopied Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }

    free(arr);
    free(copy);
    return 0;
}
