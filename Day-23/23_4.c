// Q1: Write a program to find the subarray with the maximum sum using the Kadane’s Algorithm.

#include <stdio.h>

void findMaxSubarraySum(int arr[], int size) {
    int maxSum = arr[0], currentSum = 0, start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < size; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);
    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxSubarraySum(arr, size);

    return 0;
}
