/*
Sheela and Balu are discussing automorphic numbers, a special type where the square of a number ends with the same digits as the original number. Balu is tasked with creating a program to determine if a given number is automorphic using the function isAutomorphic(). 

Help him achieve this.
Input format :
The input consists of an integer n, representing the number that Balu needs to check for being an automorphic number.
Output format :
If n is an automorphic number, the output prints "The number is an automorphic."
If n is not an automorphic number, the output prints "The number is NOT an automorphic."

Refer to the sample output for the formatting specifications.
Code constraints :
In the given scenario, the test cases will fall under the following constraints:
1 ≤ n ≤ 100
Sample test cases :
Input 1 :
5
Output 1 :
The number is an automorphic.
Input 2 :
7
Output 2 :
The number is NOT an automorphic.
Input 3 :
1
Output 3 :
The number is an automorphic.
Input 4 :
100
Output 4 :
The number is NOT an automorphic.
*/

#include <stdio.h>

int isAutomorphic(int num);

int main(){
    int num;
    scanf("%d", &num);
    isAutomorphic(num);
    return 0;
}

int isAutomorphic(int num){
    int num2, num1=num;
    num2=(num*num);
    while (num1>0){
        int i=num1%10;
        int j=num2%10;
        if (i!=j){
            printf("The number is NOT an automorphic.");
            return 1;
        }
        num1/=10;
        num2/=10;
    }
    printf("The number is an automorphic.");
    return 0;
}
