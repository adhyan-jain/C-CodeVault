/*
Problem Statement

Antony is tasked with developing a program that takes an integer input and performs different operations based on whether the number is odd or even. 
1.	If the input number is odd, the program should reverse it.
2.	If it's even, it should calculate the sum of its digits. 

The program should utilize the 'goto' statement for control flow.
Input format :
The input consists of a positive integer N.
Output format :
If N is odd, the output prints "Reversed number: " followed by the reversed number of N.
If N is even, the output prints "Sum of digits: " followed by the sum of the digits of N.

Refer to the sample output for formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
11 ≤ N ≤ 200
Sample test cases :
Input 1 :
12
Output 1 :
Sum of digits: 3
Input 2 :
13
Output 2 :
Reversed number: 31
*/

#include <stdio.h>

int main(){
    int n, sum=0, rev=0, digit;
    scanf("%d",&n);
    if (n<=0){
        return 1;
    }
    if (n%2!=0){
        goto ODD;
    }else{
        goto EVEN;
    }
ODD:
    while (n!=0){
        digit = n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("Reversed number: %d",rev);
    return 0;
EVEN:
    while(n != 0){
        digit =n%10;
        sum+=digit;
        n/=10;
    }
    printf("Sum of digits: %d",sum);
    return 0;
}
