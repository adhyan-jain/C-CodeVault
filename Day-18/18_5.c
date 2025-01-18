/*
Rajdeep is exploring matrices. He wants to write a program to display the lower triangular part of a square matrix. You have to assist him in creating the code.

Write a program that takes an integer N as input and a square matrix of size NxN. Implement the logic to display the lower triangular part of the matrix.

Input format :
The input consists of a single integer N, representing the size of the square matrix.
The next N lines contain N space-separated integers, representing the elements of the matrix.

Output format :
The output displays the lower triangular matrix based on the input, with elements above the main diagonal replaced by zeros.

Refer to the sample output for formatting specifications.

Code constraints :
In the given scenario, the test cases fall under the following constraints:
2 ≤ N ≤ 8
0 ≤ elements ≤ 9

Sample test cases :

Input 1 :
2
1 2
4 5

Output 1 :
1 0 
4 5 

Input 2 :
5
7 4 1 2 3
8 5 2 3 9
9 6 3 2 1
9 5 1 2 3
4 5 6 3 2

Output 2 :
7 0 0 0 0 
8 5 0 0 0 
9 6 3 0 0 
9 5 1 2 0 
4 5 6 3 2 
*/

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int arr[9][9];
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if (i>=j){
                scanf("%d", &arr[i][j]);
                printf("%d ", arr[i][j]);
            }else{
                scanf("%d", &arr[i][j]);
                arr[i][j]=0;
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
    
    return 0;
}
