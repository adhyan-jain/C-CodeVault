/*
Problem Statement 

John and Sarah were working on a school project that involved performing calculations on two numbers.
They needed a program to find the sum and difference of the numbers entered by the user.
John was assigned the task of writing the program. John started by asking the user to enter the first and
second numbers. John and Sarah could use the program to quickly find the sum and difference of any two numbers
they wanted for their project.

Can you help John by writing the C program to accomplish this task?

Input format :
The first line of input is the first number in the int.
The second line of input is the second number in the int.

Output format :
The first line of output is the sum of two numbers in the int.
The second line of output is the difference of two numbers in the int.

Code constraints :
-32289 <num1,num2< 32289

Sample test cases :

Input 1 :
9
6

Output 1 :
Sum: 15
Subtraction: 3
*/
#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Sum : %d", num1+num2);
    printf("Subtraction : %d", num1-num2);
    return 0;
}
