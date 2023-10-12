#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    int num;
    int result = -1;

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for (int i = 0; i < count; i++) {
        if (arr[i] == num) {
            result = i;
            break;
        };
    }

    printf("%d", result);

    return 0;
}