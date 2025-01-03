// Program to print multiplication tables
#include <stdio.h>

int main()
{
    int num;
    printf("Pick a number : ");
    scanf("%d", &num); // Input the number
    for (int i = 1; i < 11; i++) // For loop from 1 to 10
    {
        printf("%d X %d = %d\n", num, i, i * num);
    }
    return 0;
}