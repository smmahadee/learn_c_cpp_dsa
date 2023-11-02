#include <stdio.h>

int count_before_one(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) break;
        count++;
    }

    return count;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, size);
    printf("%d", result);

    return 0;
}