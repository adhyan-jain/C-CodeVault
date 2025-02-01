// Unique Elements in an Array

#include <stdio.h>
#include <stdlib.h>

void findUniqueElements(int *arr, int size) {
    printf("Unique elements: ");
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count == 1) printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    
    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocating memory for array
    int *arr = (int *)malloc(size * sizeof(int));

    // Taking array input
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findUniqueElements(arr, size);

    // Freeing memory
    free(arr);
    
    return 0;
}
