// Program to print pattern of Right Triangle
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the triangle length : ");
    scanf("%d", &num);

    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}