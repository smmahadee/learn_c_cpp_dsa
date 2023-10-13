#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    for (int i = count - 1; i >= 0; i--) {
        if (i == index) {
            printf("%d ", value);
        } else {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}