#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int index;
    scanf("%d", &index);

    for (int i = index; i < count - 1; i++) {
         arr[i] = arr[i + 1];
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}