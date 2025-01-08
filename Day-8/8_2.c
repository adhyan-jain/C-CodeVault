// Sum and Average of N Numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n; 
    float sum = 0.0, avg = 0.0;
    printf("Enter array size: \n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int)); // Allocate memory

    if (ptr == NULL) // Check if memory allocation was successful
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]); // Reads input into the allocated memory
        sum+=ptr[i]; // Add current element to sum
    }
    avg=(float)sum/n;
    printf("Sum = %.2f \nAverage = %.2f", sum, avg);
    free(ptr);
    ptr=NULL;
    return 0;
}