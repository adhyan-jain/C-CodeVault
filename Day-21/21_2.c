/*
David loves patterns and arrays. He has given you a 2D array and wants you to print its elements in a special snake pattern. 

In this pattern, if the row number is even, the elements of that row should be printed from right to left. If the row number is odd, the elements should be printed from left to right.

Write a program to print the given 2D array in the snake pattern as per David's request.

Note: Row number = 1, 2, 3, ... etc.

Input format :
The first line of input consists of two integers, m, and n, representing the dimensions of the 2D array.
This is followed by m lines, each containing n space-separated integers, representing the elements of the 2D array.

Output format :
The output prints the space-separated elements of the 2D array in the snake pattern, following the rules mentioned above.

Code constraints :
1 ≤ m, n ≤ 15

Sample test cases :

Input 1 :
4 4
10 20 30 40 
15 25 35 45 
18 28 38 48 
50 60 70 80
Output 1 :
10 20 30 40 45 35 25 15 18 28 38 48 80 70 60 50 

Input 2 :
3 2
1 4
5 8
9 3
Output 2 :
1 4 8 5 9 3 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, column, **arr;
    scanf("%d", &row);
    scanf("%d", &column);
    arr=(int**)malloc(row*sizeof(int*));
    
    if (arr==NULL){
        printf("Memory allocation failed!");
    }
    
    for (int i=0; i<row; i++){
        arr[i]=(int*)malloc(column*sizeof(int));
        if (arr[i]==NULL){
            printf("Memory allocation failed!");
        }
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            if (i%2==0){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("%d ", arr[i][column-j-1]);
            }
        }
    }
    
    return 0;
}
