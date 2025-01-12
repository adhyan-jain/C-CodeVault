/*
Problem Statement

Imagine you are a curious explorer named Alex, delving into the programming world. Eager to grasp the concept of prime numbers, you embark on a coding adventure.

Your goal is to write a program that takes a number as input and reveals whether it is a prime number or not. 

Note: Use nested if-else statement.
Input format :
The input consists of a single integer n, representing the number to be checked for primality.
Output format :
If the input number is a prime number, the output displays "n is a prime number." where n is the input number.
If the input number is not a prime number, the output displays "n is not a prime number." where n is the input number.

Refer to the sample output for the formatting specifications.
Code constraints :
In the given scenario, the test cases fall under the following constraints:
2 ≤ n ≤ 10000
Sample test cases :
Input 1 :
5
Output 1 :
5 is a prime number.
Input 2 :
1000
Output 2 :
1000 is not a prime number.
Input 3 :
2
Output 3 :
2 is a prime number.
*/

#include <stdio.h>

int main(){
    int prime=1, num;
    scanf("%d", &num);
    if (num==1){
        prime=0;
    }
    for (int i=2; i<=num/2; i++){
        if (num%i==0){
            prime=0;
            break;
        }
        continue;
    }
    if (prime==1){
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    return 0;
}
