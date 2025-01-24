/*
In a town planning project, Sarah is tasked with analyzing the population distribution in a square region represented by an NxN matrix. She needs to divide the region into four quadrants and calculate the sum of populations in each quadrant. 

Can you write a program to help Sarah find the population sums for the top-left, top-right, bottom-left, and bottom-right quadrants?

Input format :
The first line of input contains an integer T, the number of test cases.
For each test case:
1.	The first line contains an integer N, the dimension of the square matrix.
2.	The next N lines each contain N integers, representing the population distribution in the region.

Output format :
For each test case, print four integers: the sums of the populations in the top-left, top-right, bottom-left, and bottom-right quadrants, respectively.

Code constraints :

The given test cases fall under the following constraints:
1 ≤ T ≤ 10
2 ≤ N ≤ 10 (The value of N will be even)
0 ≤ population ≤ 100

Sample test cases :

Input 1 :
2
4
8 4 3 5
1 8 2 1
2 7 3 2
8 8 4 8
2
1 2
9 3
Output 1 :
21 11 25 17
1 2 9 3

Input 2 :
1
8
1 9 6 2 6 8 6 1
4 3 3 4 4 9 9 2
8 3 2 7 8 5 5 3
6 2 1 7 5 5 9 4 
4 2 8 6 9 4 2 5
7 7 4 6 5 8 6 6
2 6 8 4 7 7 5 7
8 7 6 5 4 3 2 1
Output 2 :
68 89 90 81
*/

#include <stdio.h>
#include <stdlib.h>

void func(int size, int** arr);

int main(){
    int num, size, **arr;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d", &size);
        arr=(int**)malloc(size*sizeof(int*));
        if(arr==NULL){
            printf("Memory allocation failed!");
            return 1;
        }
        for (int i=0; i<size;i++){
            arr[i]=(int*)malloc(size*sizeof(int));
            if(arr[i]==NULL){
                printf("Memory allocation failed!");
                return 1;
        }
        }
        func(size, arr);
        printf("\n");
    }
    return 0;
}

void func(int size, int** arr){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum[4]={0,0,0,0};
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(i<size/2 && j<size/2){
                sum[0]+=arr[i][j];
            }
            else if(i<size/2 &&j>=size/2){
                sum[1]+=arr[i][j];
            }
            else if(i>=size/2 && j<size/2){
                sum[2]+=arr[i][j];
            }
            else if(i>=size/2 && j>=size/2){
                sum[3]+=arr[i][j];
            }
        }
    }
    printf("%d %d %d %d", sum[0], sum[1], sum[2], sum[3]);
    free(arr);
}
