// Program to reverse a given number
#include <stdio.h>

int main()
{
    int num, rev = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;       // Get the last digit
        rev = rev * 10 + remainder; // Append the last digit of number to reversed number
        num = num / 10;             // Remove the last digit from the number
    }

    printf("Reversed number is: %d\n", rev);
    return 0;
}
