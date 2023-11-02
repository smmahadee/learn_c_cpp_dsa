#include <stdio.h>

void printArray(int *arr, int size) {
    if (size <= 0) {
        printf("%d ", arr[size]);
        return;
    };

    printArray(arr, size - 1);

    printf("%d ", arr[size]);
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    return 0;
}