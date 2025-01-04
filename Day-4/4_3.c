// Reverse an array without using a second array
#include <stdio.h>

int main()
{
    // Initialize array
    int num, temp;
    printf("Enter the number of elements to be added in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // New array
    printf("New array: ");
    for (int i = 0; i < num; i++)
    {
        if (i <= num / 2)
        {
            temp = arr[i];
            arr[i] = arr[num - i - 1];
            arr[num - i - 1] = temp;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}