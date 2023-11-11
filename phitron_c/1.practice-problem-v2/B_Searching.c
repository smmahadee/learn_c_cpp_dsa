#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int num, result = -1;
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}