#include <stdio.h>

void odd_even() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) evenCount++;
        if (arr[i] % 2 == 1) oddCount++;
    }

    printf("%d ", evenCount);
    printf("%d", oddCount);
}

int main() {
    odd_even();

    return 0;
}