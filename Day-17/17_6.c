/*
Write a program to calculate the simple interest.

Input format :
The input consists of the amount, rate of interest, and time period(in years) separated by a space.

Output format :
The output prints the simple interest with two decimal places.

Sample test cases :

Input 1 :
155 3 1

Output 1 :
4.65

Input 2 :
100 2 3

Output 2 :
6.00
*/

#include <stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%.2f", num1*num2*num3*0.01);
    return 0;
}
