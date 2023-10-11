#include <stdio.h>

int main() {
    int count, total = 0;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++) {
        total += arr[i];
    }

    printf("%d\n", total);

    

    return 0;
}