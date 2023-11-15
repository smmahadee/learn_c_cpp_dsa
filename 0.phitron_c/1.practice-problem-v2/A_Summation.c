#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    if (sum < 0) {
        printf("%lld", sum * -1);
    } else {
        printf("%lld", sum);
    }

    return 0;
}