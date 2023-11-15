#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    for (int i = 0; i < size; i++) {
        if (i == minIndex) {
            printf("%d ", arr[maxIndex]);

        } else if (i == maxIndex) {
            printf("%d ", arr[minIndex]);

        } else {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}