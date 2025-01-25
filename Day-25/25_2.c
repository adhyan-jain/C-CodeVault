/*
Manoj wants to explore numbers. The number should be even and also a multiple of 10. Write a program to obtain a number x and check if it is even or not. If even, check whether it is a multiple of 10 or not.

Function Specifications:
1.	void iseven(int x) - Prints whether the input number is even or not.
2.	void ismultiple(int x) - Prints whether the input number is a multiple of 10 or not.
Input format :
The input consists of an integer x.
Output format :
The first line displays "Even" if x is even or "Not even" otherwise.
If x is even, the second line displays "Multiple of 10" if x is a multiple of 10 or "Not a multiple of 10" otherwise.

Refer to the sample output for formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
1 ≤ x ≤ 106
Sample test cases :
Input 1 :
50
Output 1 :
Even
Multiple of 10
Input 2 :
13
Output 2 :
Not even
Input 3 :
1
Output 3 :
Not even
Input 4 :
1456
Output 4 :
Even
Not a multiple of 10
*/

#include <stdio.h>

void iseven(int num);
void ismultiple(int num);

int main(){
    int num;
    scanf("%d", &num);
    iseven(num);
    return 0;
}

void iseven(int num){
    if(num%2==0){
        printf("Even\n");
        ismultiple(num);
    }
    else{
        printf("Not even");
    }
}
void ismultiple(int num){
    if(num%10==0){
        printf("Multiple of 10");
    }
    else{
        printf("Not a multiple of 10");
    }
}
