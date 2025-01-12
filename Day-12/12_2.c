/*
Problem Statement

Claire, a software developer, is tasked with designing a program to calculate the sum of all numbers less than a given limit that are multiples of either of two specified numbers. 

She requires a program wherein she can input three integers: N representing the limit, M representing one multiple, and P representing another multiple. Upon execution, the program should output the sum of these multiples within the given limit for Claire's analysis.
Input format :
The input consists of three space-separated integers: an integer N representing the limit, an integer M representing one of the multiples, and an integer P representing another multiple.
Output format :
The output displays an integer which is the calculated sum.

Refer to the sample output for the formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
10 ≤ N ≤ 1000
2 ≤ M, P ≤ 10
Sample test cases :
Input 1 :
10 2 3
Output 1 :
32
Input 2 :
156 2 5
Output 2 :
7286
 */

#include <stdio.h>

int main(){
    int limit, num1, num2, sum=0;
    scanf("%d %d %d", &limit, &num1, &num2);
    for (int i=1; i<limit; i++){
        if (i%num1==0 || i%num2==0){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
