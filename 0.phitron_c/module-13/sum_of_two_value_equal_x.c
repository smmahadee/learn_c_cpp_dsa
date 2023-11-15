#include <stdio.h>

int main() {
    int size, value;
    scanf("%d %d", &size, &value);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == value) {
                flag = 1;
                break;
            }
        }

        if (flag == 1) break;
    }

    printf("%d", flag);

    return 0;
}