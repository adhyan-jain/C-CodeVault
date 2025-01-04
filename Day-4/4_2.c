// Program to find the largest and smallest number in an array
#include <stdio.h>

int main()
{
    // Initialize array
    int max, min, num;
    printf("Enter the number of elements to be added in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements : \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Finding the largest and smallest number in the array
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The smallest element is: %d\n", min);
    printf("The largest element is: %d\n", max);
    return 0;
}