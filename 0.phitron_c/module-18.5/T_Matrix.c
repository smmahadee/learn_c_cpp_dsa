#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) primarySum += arr[i][j];
            if (i + j == size - 1) secondarySum += arr[i][j];
        }
    }

    int absValue = abs(primarySum - secondarySum);
    printf("%d", absValue);

    return 0;
}