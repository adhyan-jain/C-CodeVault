/*
Emma, a data analyst, needs to adjust a dataset represented as a 2D matrix by removing a specified row and column. Write a program to help Emma achieve this task. 
Given the matrix and the indices of the row and column to be removed, print the modified matrix.

Input format :
The first line of input consists of an integer T, representing the number of test cases.
For each test case:
1.	The first line contains two integers R and C, representing the number of rows and columns in the matrix.
2.	The next R lines each contain C space-separated integers, representing the matrix elements.
3.	The last line contains two integers, representing the indices of the row and column to be removed (0-based).

Output format :
For each test case, print the resulting matrix after removing the specified row and column.

Code constraints :
The given test cases fall under the following constraints:
1 ≤ T ≤ 10
1 ≤ R, C ≤ 5
0 ≤ matrix elements ≤ 100

Sample test cases :

Input 1 :
2 
3 3 
1 2 3 
4 5 6 
7 8 9 
0 2 
3 3
1 2 6 
3 4 5
1 0 8
1 2
Output 1 :
4 5 
7 8 
1 2 
1 0 

Input 2 :
1
5 5
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
58 93 47 93 92
24 35 46 57 86
4 2
Output 2 :
11 12 14 15 
16 17 19 20 
21 22 24 25 
58 93 93 92
*/

#include <stdio.h>
#include <stdlib.h>

int func(int r, int c, int** arr);

int main(){
    int num, r, c, **arr;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d %d", &r, &c);
        func(r, c, arr);
    }
    return 0;
}

int func(int r, int c, int** arr){
    arr=(int**)malloc(r*sizeof(int*));
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for (int i=0; i<r; i++){
        arr[i]=(int*)malloc(c*sizeof(int));
        if(arr[i]==NULL){
            printf("Memory allocation failed!");
            return 1;
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int row, column;
    scanf("%d %d", &row, &column);
    for(int i=0; i<r; i++){
        int check=0;
        for(int j=0; j<c; j++){
            if(i!=row && j!=column){
                printf("%d ", arr[i][j]);
                check=1;
            }
        }
        if(check){
            printf("\n");
        }
    }
    free(arr);
    return 0;
}
