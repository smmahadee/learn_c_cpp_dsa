#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int countArr[7] = {0};

    for (int i = 0; i < size; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 0; i < 7; i++) {
        if (countArr[i] > 0) {
            printf("%d - %d\n", i, countArr[i]);
        }
    }

    return 0;
}