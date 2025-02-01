// Matrix Rotation (90 Degrees Clockwise)

#include <stdio.h>
#include <stdlib.h>

void rotateMatrix(int **matrix, int rows, int cols, int ***rotated) {
    // Allocating memory for rotated matrix
    *rotated = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) {
        (*rotated)[i] = (int *)malloc(rows * sizeof(int));
    }

    // Rotating the matrix 90 degrees clockwise
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            (*rotated)[j][rows - 1 - i] = matrix[i][j];
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    // Taking matrix size input
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Allocating memory for matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    // Taking matrix input
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    int **rotated;
    rotateMatrix(matrix, rows, cols, &rotated);

    printf("\nRotated Matrix:\n");
    printMatrix(rotated, cols, rows);

    // Freeing memory
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);
    
    for (int i = 0; i < cols; i++) free(rotated[i]);
    free(rotated);

    return 0;
}
