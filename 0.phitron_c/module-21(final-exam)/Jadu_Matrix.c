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

    if (row != column) {
        printf("NO");
        return 0;
    }

    int isJaduMatrix = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
          if(i == j) {
            if(arr[i][j] != 1) {
                isJaduMatrix = 0;
                break;
            }
          }else if(i + j == column - 1) {
            if(arr[i][j] != 1) {
                isJaduMatrix = 0;
                break;
            }
          }else {
            if(arr[i][j] != 0) {
                isJaduMatrix = 0;
                break;
            }
          }
        }
    }

    if (isJaduMatrix == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}