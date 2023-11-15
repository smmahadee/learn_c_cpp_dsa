#include <stdio.h>
#include <string.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int count[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < size; i++) {
        printf("Total %d is - %d\n", i, count[i]);
    }

    return 0;
}