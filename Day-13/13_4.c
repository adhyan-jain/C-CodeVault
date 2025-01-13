/*
Problem Statement

Imagine you are a mathematics teacher trying to help your students understand the concept of divisors. To make things more engaging, you create a program that calculates divisors for a given number N and also provides additional insights by calculating the product of even divisors and the product of odd divisors.

Example
Input
90
Explanation
For N = 90, the divisors are: 1, 2, 3, 5, 6, 9, 10, 15, 18, 30, 45.
Even divisors: 2, 6, 10, 18, 30
Product of even divisors: 2 * 6 * 10 * 18 * 30 = 64800
Odd divisors: 1, 3, 5, 9, 15, 45
Product of odd divisors: 1 * 3 * 5 * 9 * 15 * 45 = 91125
Output
Divisors of 90: 1 2 3 5 6 9 10 15 18 30 45 
Product of even divisors: 64800
Product of odd divisors: 91125

Your task is to write a program that takes a number N and Finds all divisors of N along with calculating the product of all even divisors and the product of all odd divisors.
Input format :
The input consists of an integer as N
Output format :
The first line of output consists of an integer in the format of <Divisor of <value>>
The second line of output consists of an integer in the format of <Product of even divisors:>
The third line of output consists of an integer in the format of <Product of odd divisors:>

Refer to the sample output for the formatting specifications.
Code constraints :
2 ≤ N ≤ 105
Sample test cases :
Input 1 :
90
Output 1 :
Divisors of 90: 1 2 3 5 6 9 10 15 18 30 45 
Product of even divisors: 64800
Product of odd divisors: 91125
Input 2 :
56
Output 2 :
Divisors of 56: 1 2 4 7 8 14 28 
Product of even divisors: 25088
Product of odd divisors: 7
*/

#include <stdio.h>

int main(){
    int num, odd=1, even=1;
    scanf("%d", &num);
    printf("Divisors of %d: ", num);
    for (int i=1; i<num; i++){
        if (num%i==0){
            if (i%2==0){
                even*=i;
            }
            else{
                odd*=i;
            }
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Product of even divisors: %d\n", even);
    printf("Product of odd divisors: %d", odd);
    return 0;
}
