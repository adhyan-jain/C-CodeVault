// Patter of Diamond
#include <stdio.h>

int main()
{
    int n, num;
    printf("Enter the diamond length (odd number only) : ");
    scanf("%d", &n);
    // Check if n is an odd number
    if (n % 2 == 0)
    {
        printf("Please enter an odd number.\n");
        return 1;
    }
    num = n / 2;
    // Upper Half
    for (int i = 0; i < num + 1; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Lower Half
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (num - i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}