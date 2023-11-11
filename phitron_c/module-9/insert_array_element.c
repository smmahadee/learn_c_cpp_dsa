#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count + 1];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int position, value;
    scanf("%d %d", &position, &value);

    for (int i = count; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    for (int i = 0; i <= count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}