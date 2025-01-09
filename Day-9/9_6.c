// Program to input and print a matrix using memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(){
    // double * for arr pointer declaration because we create arrays inside it
    int **arr, len1, len2;
    printf("Enter number of rows of array: ");
    scanf("%d", &len1);
    printf("Enter number of columns of array: ");
    scanf("%d", &len2);
    arr = (int**) malloc(len1*sizeof(int*));
    // Check if the memory has been allocated successfully
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // Dynamically allocate memory for each row
    for (int i=0; i<len1; i++){
        arr[i]= (int*) malloc(len2*sizeof(int));
        if (arr[i] == NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
    }

    // Input elements in the matrix
    for (int i=0; i<len1; i++){
        for (int j=0; j<len2; j++){
            printf("Enter element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the elements of matrix
    printf("Original Matrix: \n");
    for (int i=0; i<len1; i++){
        for (int j=0; j<len2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Transpose of matrix
    printf("Transpose of Matrix: \n");
    for (int i=0; i<len1; i++){
        for (int j=0; j<len2; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    // freeing nested arrays and the main array 
    for (int i=0; i<len1; i++){
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}