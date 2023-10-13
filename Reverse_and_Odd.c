#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = count - 1; i >= 0; i--) {
        if(i%2 != 0) printf("%d ", arr[i]);
    }

    return 0;
}