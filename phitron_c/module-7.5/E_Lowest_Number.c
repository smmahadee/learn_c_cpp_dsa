#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int lowest = arr[0];

    for (int i = 0; i < count; i++) {
        if (arr[i] < lowest) lowest = arr[i];
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] == lowest) {
            printf("%d %d", lowest, i + 1);
            break;
        }
    }

    return 0;
}