// Factorial of a number using a loop
#include <stdio.h>

int main()
{
    int num, fac = 1;
    printf("Enter a number to calculate its factorial : ");
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        fac = fac * i;
    }
    printf("The factorial of %d is %d", num, fac);
    return 0;
}