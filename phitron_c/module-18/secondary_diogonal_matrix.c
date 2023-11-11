#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (row != col) {
        printf("Not Diogonal");
        return 0;
    }

    int isDiogonal = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j == col - 1) continue;

            if (arr[i][j] != 0) {
                isDiogonal = 0;
                break;
            }
        }
    }

    if (isDiogonal) {
        printf("Diogonal");
    } else {
        printf("Not Diogonal");
    }

    return 0;
}