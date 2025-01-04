#include <stdio.h>

int main()
{
    int num1, num2;

    // Input first sorted array
    printf("Enter the number of elements in array-1: ");
    scanf("%d", &num1);
    int arr1[num1];
    printf("Enter the elements of array-1 (sorted): ");
    for (int i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter the number of elements in array-2: ");
    scanf("%d", &num2);
    int arr2[num2];
    printf("Enter the elements of array-2 (sorted): ");
    for (int i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Total size of the merged array
    int tot = num1 + num2;
    int newarr[tot];

    // Merging the arrays
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < num1 && j < num2) {
        if (arr1[i] < arr2[j]) {
            newarr[k] = arr1[i];
            i++;
        } else {
            newarr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arr1, if any
    while (i < num1) {
        newarr[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arr2, if any
    while (j < num2) {
        newarr[k] = arr2[j];
        j++;
        k++;
    }

    // Output merged array
    printf("Merged array: ");
    for (int i = 0; i < tot; i++) {
        printf("%d ", newarr[i]);
    }
    printf("\n");

    return 0;
}
