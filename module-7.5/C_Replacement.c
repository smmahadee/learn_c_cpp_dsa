#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] < 0) {
            printf("%d ", 2);
        } else if (arr[i] > 0) {
            printf("%d ", 1);
        } else {
            printf("%d ", 0);
        }
    }

    return 0;
}