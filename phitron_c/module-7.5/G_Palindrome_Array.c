#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    int arr2[count];
    int result = 1;

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++) {
        arr2[count - 1 - i] = arr[i];
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] != arr2[i]) {
            result = 0;
            break;
        }
    }

    if (result == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}