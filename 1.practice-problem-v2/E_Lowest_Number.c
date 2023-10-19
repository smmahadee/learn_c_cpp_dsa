#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int lowest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < lowest) lowest = arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == lowest) {
            printf("%d %d", arr[i], i + 1);
            break;
        }
    }

    return 0;
}