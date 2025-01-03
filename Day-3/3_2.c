// Program to print Fibonacci Series
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 1, num3, n; // n is the number of terms in the series
    num3 = num1 + num2;
    printf("Enter the number of terms of fibonacci series you want to see : ");
    scanf("%d", &n);
    printf("%d\n%d\n", num1, num2);
    for (int i = 2; i < n + 1; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d\n", num3);
    }
    return 0;
}