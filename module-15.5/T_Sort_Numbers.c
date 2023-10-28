#include <stdio.h>
#include <string.h>

int main() {
    int size = 3;

    int arr[size], sortedArr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sortedArr[i] > sortedArr[j]) {
                int temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", sortedArr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}