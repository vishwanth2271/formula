#include <stdio.h>
#define SIZE 4

int main() {
    int matrix[SIZE][SIZE], sum = 0, diagonalSum1 = 0, diagonalSum2 = 0;

    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 4x4 matrix is:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
            if (i == j) diagonalSum1 += matrix[i][j];
            if (i + j == SIZE - 1) diagonalSum2 += matrix[i][j];
        }
        printf("\n");
    }

    printf("\nSum of all elements: %d\n", sum);
    printf("Sum of the primary diagonal: %d\n", diagonalSum1);
    printf("Sum of the secondary diagonal: %d\n", diagonalSum2);

    return 0;
}