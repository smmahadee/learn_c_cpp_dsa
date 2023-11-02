#include <stdio.h>

void printEvenIndiceReverse(int *arr, int size) {
    if (size < 0) return;
    if (size == 0) {
        printf("%d", arr[size]);
        return;
    }

    if (size % 2 != 0) size--;

    printf("%d ", arr[size]);
    printEvenIndiceReverse(arr, size - 2);
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printEvenIndiceReverse(arr, size - 1);

    return 0;
}