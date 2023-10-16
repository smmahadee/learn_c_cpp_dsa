#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = count - 1;

    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}