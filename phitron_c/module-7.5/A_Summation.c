#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    long long int total = 0;

    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < count; i++) {
        total += arr[i];
    }

    if (total < 0) {
        printf("%lld", total * -1);
    } else {
        printf("%lld", total);
    }

    return 0;
}