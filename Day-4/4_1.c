// Program to find the sum and average of an array

#include <stdio.h>

int main()
{
    int sum = 0, n; // n is length of array
    float avg;
    printf("Enter number of elements to be added in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Take user input for elements of array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f", avg);
    return 0;
}