// Program to find the frequency of each element in an array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Dynamically allocate memory for visited array
    int* visited = (int*)calloc(n, sizeof(int)); // Initialized to 0
    if (visited == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip already counted elements
        }

        int count = 1; // Count current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate elements as visited
            }
        }

        printf("Element %d occurs %d time(s)\n", arr[i], count);
    }

    // Free allocated memory
    free(arr);
    free(visited);

    return 0;
}
