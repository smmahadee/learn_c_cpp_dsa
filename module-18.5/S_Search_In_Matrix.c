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

    int findingNum;
    scanf("%d", &findingNum);

    int isExist = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == findingNum) {
                isExist = 1;
                break;
            }
        }
    }

    if (isExist) {
        printf("will not take number");
    } else {
        printf("will take number");
    }

    return 0;
}