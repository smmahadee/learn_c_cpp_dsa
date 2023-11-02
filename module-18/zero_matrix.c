#include <stdio.h>

int main() {
    int arr[5][3] = {0};

    int countZero = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 0) countZero++;
        }
    }

    printf("%d\n", countZero);

    return 0;
}