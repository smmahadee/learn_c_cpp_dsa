// largest sum of an adjacent element from an array

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
        for (int j = 0; j < size - 1; j++) {
            if(i == j) continue;
            int total = arr[i] + arr[j];
            if (total > largest_sum) largest_sum = total;
        }
    }

    printf("%d", largest_sum);

    return 0;
}