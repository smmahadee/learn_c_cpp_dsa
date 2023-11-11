#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count_for_2 = 0, count_for_3 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 2 == 0) {
            count_for_2++;
        } else if (arr[i] % 2 == 0) {
            count_for_2++;
        } else if (arr[i] % 3 == 0) {
            count_for_3++;
        }
    }

    printf("%d ", count_for_2);
    printf("%d", count_for_3);

    return 0;
}