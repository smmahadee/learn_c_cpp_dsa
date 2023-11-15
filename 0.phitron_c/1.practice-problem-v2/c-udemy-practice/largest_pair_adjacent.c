#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest_sum = arr[0] + arr[1];

    for (int i = 0; i < size; i++) {
        int total = arr[i] + arr[i + 1];
        if (total > largest_sum) largest_sum = total;
    }

    printf("%d", largest_sum);

    return 0;
}