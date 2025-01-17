/*
Problem Statement

The temperature in a city is measured in Celsius (°C). Write a program that takes a temperature value 
in Celsius as input and converts it to Fahrenheit (°F).
The program should then output the converted temperature in Fahrenheit with two decimal places.

Note: Fahrenheit formula, F = 1.8 C + 32.

Input format :
The input will be a floating-point number representing the temperature in Celsius.

Output format :
The output will be a single floating-point number representing the temperature in Fahrenheit,
rounded to two decimal places.
Sample test cases :

Input 1 :
51

Output 1 :
123.80

Input 2 :
48

Output 2 :
118.40
*/

#include <stdio.h>

int main(){
    int ctemp;
    float ftemp;
    scanf("%d", &ctemp);
    ftemp=1.8*ctemp+32;
    printf("%.2f", ftemp);
    return 0;
}
