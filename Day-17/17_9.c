/*
Write a program that accepts two integer as input and prints their sum.

Input format :
The input consists of two integers separated by a space.

Output format :
The output prints their sum.

Sample test cases :

Input 1 :
10 20

Output 1 :
30

Input 2 :
258 965

Output 2 :
1223
*/

#include <stdio.h>

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", num1+num2);
    return 0;
}
