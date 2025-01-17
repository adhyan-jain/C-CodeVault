/*
Problem Statement

Bert is working on a program that calculates the factorial of a given positive integer.
If the entered number is negative, the program should take its absolute value before calculating the factorial. 

Design a program that calculates the factorial of the absolute value using the unsigned long long data type
and prints the result.

Input format :
The first line of input consists of an integer value 'n'.

Output format :
The output displays the calculated factorial of the given integer.

Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:
-65 ≤ n ≤ 65

Sample test cases :

Input 1 :
5

Output 1 :
120

Input 2 :
65

Output 2 :
9223372036854775808

Input 3 :
-3

Output 3 :
6
*/

#include <stdio.h>

int main(){
    unsigned long long int fac=1;
    int num;
    scanf("%d", &num);
    if (num<0){
        num=-num;
    }
    for (int i=1; i<=num; i++){
        fac= fac*i;
    }
    printf("%llu", fac);
    return 0;
}
