#include <stdio.h>

int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    int arr1[row][column], arr2[row][column];
    for (int i = 0; i < row * 2; i++) {
        for (int j = 0; j < column; j++) {
            if (i < row) {
                scanf("%d", &arr1[i][j]);
            } else {
                scanf("%d", &arr2[i - row][j]);
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }

        printf("\n");
    }

    return 0;
}