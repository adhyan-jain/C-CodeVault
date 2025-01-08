// Merge Two Arrays into One Dynamically

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, *arr1, *arr2, *merged;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    arr1 = (int *)malloc(n1 * sizeof(int));
    arr2 = (int *)malloc(n2 * sizeof(int));
    merged = (int *)malloc((n1 + n2) * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || merged == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }

    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
}
