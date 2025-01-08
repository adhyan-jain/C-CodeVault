// Insert an Element at a Specific Position

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, element, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc((n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
