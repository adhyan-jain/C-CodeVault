// Implement binary search in an array
#include <stdio.h>

int main() {
    int num;
    // Initialize array
    printf("Enter the number of elements to be added in the array (sorted): ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements
    int target;  // Element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    int left = 0, right = size - 1, mid;
    int found = -1;  // -1 means not found

    // Binary search loop
    while (left <= right) {
        mid = left + (right - left) / 2;  // Calculate mid index

        if (arr[mid] == target) {
            found = mid;  // Target found at index 'mid'
            break;  // Exit loop once found
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } 
        else {
            right = mid - 1;  // Search in the left half
        }
    }

    // Output result
    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
