/*
Given a square matrix of size N consisting of positive integers. Find the count of all the square sub-matrices, the sum of whose elements is equal to a given number S.

Explanation:
In the given matrix, the sub-matrix (0, 1) to (1, 2) with sum = 2 + 3 + 5 + 6 = 16. So, the output is the count of all the square sub-matrices, the sum of whose elements is equal to S, which is 1.

Input format :
The first line of input consists of a single integer N, denoting the size of the input matrix.
The following N lines consist of N space-separated positive integers, denoting the array's elements.
The last line consists of a single positive integer S, denoting the required sum.

Output format :
The output prints an integer denoting the count of all the square sub-matrices, the sum of whose elements is equal to S.

Code constraints :
1 ≤ N ≤ 5

Sample test cases :

Input 1 :
3
6 3 5 
1 8 2 
4 8 0
21
Output 1 :
1

Input 2 :
3
1 2 3
4 5 6
7 8 9
16
Output 2 :
1
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, **arr, num2, count=0;
    scanf("%d", &num);
    arr=(int**)malloc(num*sizeof(int*));
    if (arr==NULL){
        printf("Memory allocation failed!");
        return 0;
    }
    for (int i=0; i<num; i++){
        arr[i]=(int*)malloc(num*sizeof(int));
        if (arr[i] == NULL){
            printf("Memory allocation failed!");
            return 0;
        }
    }
    int sum1=0;
    for (int i=0; i<num; i++){
        for (int j=0; j<num; j++){
            scanf("%d", &arr[i][j]);
            sum1+=arr[i][j];
        }
    }
    
    scanf("%d", &num2);
    
    for(int size=1; size<=num; size++){
        for (int i=0; i<num-size+1; i++){
            for(int j=0; j<num-size+1; j++){
                int sum=0;
                for (int x=i; x<i+size; x++){
                    for(int y=j; y<j+size; y++){
                        sum+=arr[x][y];
                    }
                }
                if (sum==num2){
                    count++;
                }
            }
        }
    }

    for (int i=0; i<num; i++){
        free(arr[i]);
    }
    free(arr);
    printf("%d", count);
}
