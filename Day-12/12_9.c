/*
Problem Statement

Alex wants to generate a number pattern based on a specified number of rows. Write a program that reads the number of rows and prints a pyramid-like pattern where each row contains consecutive numbers increasing to a peak and then decreasing back down. The pyramid should be centered with appropriate spacing.

Input:
5 // number of rows

Output:
 
Input format :
The input consists of an integer n, representing the number of rows.
Output format :
The output prints the required pattern.

Refer to the sample output for the formatting specifications.
Code constraints :
1 ≤ n ≤ 12
Sample test cases :
Input 1 :
5
Output 1 :
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
Input 2 :
4
Output 2 :
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4
*/

#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        for (int j=0; j<num-i; j++){
            printf("  ");
        }
        for(int k=0; k<i; k++){
            printf("%d ",i+k);
        }
        for (int l=1; l<i; l++){
            printf("%d ",2*i-l-1);
        }
        printf("\n");
    }
    return 0;
}
