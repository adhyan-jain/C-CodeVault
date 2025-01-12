/*
Problem Statement

Ankitha needs to determine the total count of digits greater than a specified threshold in a range of numbers. Given the starting and ending numbers along with a threshold value, the program should calculate the count by iterating through each number in the range and outputs the total count obtained.

Assist Ankitha in determining the total count of digits with a program.

Example

Input:
Starting Number: 100
Ending Number: 150
Threshold: 3

Output:
41

Explanation:
The total count of digits greater than 3 in the range from 100 to 150 is calculated to be 41.
Input format :
The input consists of three integers separated by spaces: M, N, and X, representing the starting number, ending number, and the threshold value respectively.
Output format :
The output displays an integer representing the total count of digits greater than X within the range of numbers from M to N (both inclusive).

Refer to the sample output for the formatting specifications.
Code constraints :
In this scenario, the test cases fall under the following constraints:
0 ≤ M < N ≤ 20000
0 ≤ X ≤ 9
Sample test cases :
Input 1 :
100 150 3
Output 1 :
41
Input 2 :
10000 20000 1
Output 2 :
32001
*/

#include<stdio.h>

int main(){
    int start, end, t, count=0;
    scanf("%d %d %d", &start, &end, & t);
    for (int n =start; n<=end; n++){
        int temp=n;
        while(temp>0){
            int d = temp%10;
            if (d>t) count++;
            temp/=10;

        }
    }
    printf("%d", count);
    return 0;
}
