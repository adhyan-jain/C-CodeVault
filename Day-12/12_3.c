/*
Problem Statement

Wilson needs to develop a program that calculates the sum of even and odd numbers separately within the range from 1 to N. Using looping and continue statements, the program iterates through each number and accumulates the sums. 

Finally, it displays the sums of even and odd numbers. Write a program to help Wison achieve the same.
Input format :
The input consists of a positive integer N.
Output format :
The first line of output prints "Sum of even numbers: " followed by the sum of even numbers from 1 to N.
The second line prints "Sum of odd numbers: " followed by the sum of odd numbers from 1 to N.

Refer to the sample output for formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
1 ≤ N ≤ 200
Sample test cases :
Input 1 :
1
Output 1 :
Sum of even numbers: 0
Sum of odd numbers: 1
Input 2 :
10
Output 2 :
Sum of even numbers: 30
Sum of odd numbers: 25

*/

#include <stdio.h>

int main(){
    int num, odd=0, even=0;
    scanf("%d", &num);
    for (int i=0; i<=num; i++){
        if (i%2==0){
            even+=i;
            continue;
        }
        else{
            odd+=i;
            continue;
        }
    }
    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d", odd);
    return 0;
}
