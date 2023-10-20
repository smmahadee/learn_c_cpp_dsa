// find unique element and count total of them from array

#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int i, j, total = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) continue;
            if (arr[i] == arr[j]) {
                break;
            }
        }

        if (j == size) {
            printf("%d ", arr[i]);
            total += arr[i];
        }
    }
    printf("\n%d", total);

    return 0;
}