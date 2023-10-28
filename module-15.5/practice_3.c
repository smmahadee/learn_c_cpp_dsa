#include <stdio.h>

int count_odd(int *arr,int size) {
    int total_odd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1) total_odd++;
    }

    return total_odd;
}

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int total_odd = count_odd(arr, size);
    printf("%d", total_odd);

    return 0;
}