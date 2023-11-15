#include <stdio.h>

int main() {
    int size, position;
    scanf("%d %d", &size, &position);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < position; i++) {
        int first_value = arr[0];
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        arr[size - 1] = first_value;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}