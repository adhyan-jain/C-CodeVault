// pattern of Isosceles Triangle
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the triangle length : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = num - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j < 2 * i + 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}