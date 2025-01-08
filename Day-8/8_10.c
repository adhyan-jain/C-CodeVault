// Count the Frequency of Each Element in an Array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;

    printf("Enter the size of the array: ");
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

    printf("Frequency of elements: \n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as counted
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    free(arr);
    arr=NULL;
    return 0;
}
