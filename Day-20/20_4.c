/*
Lakshith and Manav, best friends, enjoy summer vacation playing games. This time, they delve into matrix manipulation. They write a program to determine if a matrix is symmetric by comparing it with its transpose. 

If the matrix is symmetric, they celebrate their victory; otherwise, they continue their quest for the perfect game.

Input format :
The first line of input consists of an integer N, representing the size of the matrix.
The next N lines consist of N space-separated integers, representing the matrix elements.

Output format :
The first line of output prints "Original matrix:".
The next N lines print N elements in each line representing the original matrix.
The following line prints "Transpose matrix:".
The next N lines print N elements in each line representing the transpose of the original matrix.
The last line prints one of the following:
1.	If both matrices are symmetric, print "Matrix is Symmetric!"
2.	If both matrices are not symmetric, print "Matrix is not Symmetric!"

Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 10

Sample test cases :

Input 1 :
3
1 7 3
7 4 5
3 5 6
Output 1 :
Original matrix:
1 7 3 
7 4 5 
3 5 6 
Transpose matrix:
1 7 3 
7 4 5 
3 5 6 
Matrix is Symmetric!

Input 2 :
3
1 2 3
4 5 6
1 8 7
Output 2 :
Original matrix:
1 2 3 
4 5 6 
1 8 7 
Transpose matrix:
1 4 1 
2 5 8 
3 6 7 
Matrix is not Symmetric!
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int len, **arr, **arr2;
    int symmetry=1;
    scanf("%d", &len);
    arr=(int**)malloc(len*sizeof(int*));
    arr2=(int**)malloc(len*sizeof(int*));
    
    if (arr==NULL){
        printf("Memory allocation failed!");
        return 0;
    }
    
    for (int i=0; i<len; i++){
        arr[i]=(int*)malloc(len*sizeof(int));
        arr2[i]=(int*)malloc(len*sizeof(int));
        if (arr[i]==NULL || arr2[i]==NULL){
        printf("Memory allocation failed!");
        return 0;
    }
    }
    // Original matrix
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            scanf("%d", &arr[i][j]);
            arr2[j][i]=arr[i][j];
        }
    }
    
    // Printing original matrix
    printf("Original Matrix:\n");
    
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Printing transpose matrix
    printf("Transpose Matrix:\n");
    
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            if (arr[i][j] != arr2[i][j]){
                symmetry=0;
            }
        }
    }
    
    if (symmetry){
        printf("Matrix is Symmetric!");
    }
    else{
        printf("Matrix is not Symmetric!");
    }
    return 0;
}
