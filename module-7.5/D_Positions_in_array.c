#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] <= 10) {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}