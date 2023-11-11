#include <stdio.h>

int findMax(int *arr, int size) {
    if (size == 0) return arr[size];

    int curMax = arr[size];
    int returnValue = findMax(arr, size - 1);

    return curMax > returnValue ? curMax : returnValue;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMax(arr, size - 1);
    printf("%d", result);

    return 0;
}