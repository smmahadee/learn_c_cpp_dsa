#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int last_value = arr[size - 1];
    for (int i = size - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = last_value;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}