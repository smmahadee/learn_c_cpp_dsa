#include <stdio.h>

int sumOfArray(int *arr, int size);

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int total = sumOfArray(arr, size);
    printf("%d", total);

    return 0;
}

int sumOfArray(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }

    return total;
}