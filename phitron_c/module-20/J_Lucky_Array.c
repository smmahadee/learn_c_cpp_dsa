#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) min = arr[i];
    }

    int freq = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) freq++;
    }

    if (freq % 2 == 0) {
        printf("Unlucky");
    } else {
        printf("Lucky");
    }

    return 0;
}