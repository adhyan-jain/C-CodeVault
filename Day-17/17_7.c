/*
Write a program that accepts a char, int and float as input and prints the same.

Input format :
The input consists of a char, int and float separated by a space.

Output format :
The output prints the char, int and float values separated by a space.
Round off the float value to two decimal places.

Sample test cases :

Input 1 :
a 10 15.2

Output 1 :
a 10 15.20

Input 2 :
b  25 85.258

Output 2 :
b 25 85.26
*/

#include <stdio.h>

int main(){
    char str;
    int num1;
    float num2;
    scanf("%c %d %f", &str, &num1, &num2);
    printf("%c %d %.2f", str, num1, num2);
}