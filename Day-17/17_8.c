/*
Problem Statement

Arun is working on a program to swap the values of two variables, a and b, without using a temporary variable. 

Write a program to help Arun accomplish this task.

Input format :
The first line of input is an integer value a.
The second line of input is an integer value b.

Output format :
The output prints the values of a and b after swapping.
 
Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:
1 ≤ a ≤ 150
1 ≤ b ≤ 150

Sample test cases :

Input 1 :
2
5

Output 1 :
a = 5, b = 2

Input 2 :
100
150

Output 2 :
a = 150, b = 100
*/

#include <stdio.h>

int main(){
    int num1, num2, temp;
    scanf("%d %d", &num1, &num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("a = %d, b = %d", num1, num2);
    return 0;
}
