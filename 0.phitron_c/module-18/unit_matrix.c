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
        printf("Not Unit");
        return 0;
    }

    int isUnit = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                if (arr[i][j] != 1) {
                    isUnit = 0;
                    break;
                }

                continue;
            }

            if (arr[i][j] != 0) {
                isUnit = 0;
                break;
            }
        }
    }

    if (isUnit) {
        printf("Unit");
    } else {
        printf("Not Unit");
    }

    return 0;
}