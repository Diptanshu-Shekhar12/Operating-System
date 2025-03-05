#include <stdio.h>

#define MAX 3

int main() {
    int matrix[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rowSum[MAX] = {0}, colSum[MAX] = {0};
    int i, j;

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for (i = 0; i < MAX; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSum[i]);
    }

    printf("\nSum of each column:\n");
    for (j = 0; j < MAX; j++) {
        printf("Column %d sum: %d\n", j + 1, colSum[j]);
    }

    return 0;
}

