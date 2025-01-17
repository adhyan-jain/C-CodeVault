/*
Problem Statement

Imagine you are using Lisa's to calculate the area and perimeter of a rectangular garden.
She wants to ensure that the program accurately calculates these values when provided with the length 
and width of the rectangle. enter the values of length and width of the garden,
what would be the expected output in terms of the area and perimeter of the garden?
Provide your answer as two floating-point values.

Input format :
The program prompts the user to enter the length and width of the rectangle.
The user should input two decimal numbers representing the length and width respectively.

Output format :
The program displays the calculated area and perimeter of the rectangle with two decimal places each.

Code constraints :
-32237.99 to 32237.99

Sample test cases :

Input 1 :
2.2
3.3

Output 1 :
Area of the rectangle: 7.26
Perimeter of the rectangle: 11.00

*/

#include <stdio.h>

int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    printf("Area of the rectangle: %.2f\n", num1*num2);
    printf("Perimeter of the rectangle: %.2f", 2*(num1+num2));
    return 0;
}
