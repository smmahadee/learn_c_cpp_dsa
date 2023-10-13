#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    int arr[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    int positiveNumSum = 0, negativeNumSum = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > 0) positiveNumSum += arr[i];
        if (arr[i] < 0) negativeNumSum += arr[i];
    }

    printf("%d %d", positiveNumSum, negativeNumSum);

    return 0;
}