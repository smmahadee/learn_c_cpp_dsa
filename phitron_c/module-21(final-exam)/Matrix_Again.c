#include <stdio.h>

int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    int arr[row][column];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = row - 1; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
        }
    }

    printf("\n");

    for (int i = column - 1; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", arr[j][i]);
        }
    }

    return 0;
}