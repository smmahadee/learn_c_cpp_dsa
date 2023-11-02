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
        printf("Not Scaler");
        return 0;
    }

    int isScaler = 1;
    int initialValue = arr[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                if (arr[i][j] != initialValue) {
                    isScaler = 0;
                    break;
                }

                continue;
            }

            if (arr[i][j] != 0) {
                isScaler = 0;
                break;
            }
        }
    }

    if (isScaler) {
        printf("Scaler");
    } else {
        printf("Not Scaler");
    }

    return 0;
}