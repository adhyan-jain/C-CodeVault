// Program to find the sum of all even numbers from 1 to n
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}