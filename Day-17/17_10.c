/*
Problem Statement

Mrs. Johnson, a dedicated teacher, wanted to develop a program to calculate the total marks and percentages obtained by her students in a set of five subjects using arithmetic operators.
Could you assist Mrs. Johnson by writing the program?

Input format :
The input consists of five space-separated integers, representing the scores obtained by a student in five subjects.

Output format :
The first line displays "Total: " followed by an integer, representing the sum of the five subject scores.
The second line displays "Percentage: " followed by a float value, representing the calculated percentage, rounded off to two decimal places.

Refer to the sample output for formatting specifications.

Code constraints :
In the given scenario, test cases fall under the following constraints:
0 ≤ marks ≤ 100

Sample test cases :

Input 1 :
12 25 69 87 49

Output 1 :
Total: 242
Percentage: 48.40

Input 2 :
98 98 99 100 100

Output 2 :
Total: 495
Percentage: 99.00
*/

#include <stdio.h>

int main(){
    int num1, num2, num3, num4, num5;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    int total;
    float percentage;
    total = num1 +num2 + num3 + num4 + num5;
    percentage = (float) total / 5;
    printf("Total: %d\n", total);
    printf("Percentage: %.2f", percentage);
    return 0;
}
