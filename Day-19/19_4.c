/*
Problem Statement

Misha wants to check and print whether the given number N is a neon number or not. Write a program that uses a function and helps her to complete this task.

A neon number is a number where the sum of digits of the square of the number is equal to the number. 

Function Prototype: int neon(int)

Example 1

Input:
9
Output:
9 is a neon number
Explanation:
92 = 81, and the sum of its digits (8+1) is equal to the original number (9).

Example 2

Input:
12
Output:
12 is not a neon number
Explanation:
(12)2=144, and the sum of its digits (1+4+4) is not equal to the original number (12).
Input format :
The input consists of an integer, N.
Output format :
If N is a neon number, print "N is a neon number"
Otherwise, print "N is not a neon number"

Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:
0 ≤ N ≤ 100

Sample test cases :

Input 1 :
9
Output 1 :
9 is a neon number

Input 2 :
12
Output 2 :
12 is not a neon number
*/

#include <stdio.h>

int main(){
    int num, temp, rem, sum=0;
    scanf("%d", &num);
    temp=num*num;
    
    while(temp!=0){
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    if (sum==num){
        printf("%d is a neon number", num);
    }
    else{
        printf("%d is not a neon number", num);
    }
    return 0;
}
