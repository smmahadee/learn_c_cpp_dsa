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

    for (int i = 0; i < row; i++) {
        for (int j = column - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}