#include <stdio.h>

long long int sumOfArray(int *arr, int size) {
    if (size == 0) return arr[0];

    return arr[size] + sumOfArray(arr, size - 1);
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    long long int result = sumOfArray(arr, size - 1);
    printf("%lld", result);

    return 0;
}