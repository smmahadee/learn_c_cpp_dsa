#include <stdio.h>

int main() {
    int count1, count2;
    scanf("%d %d", &count1, &count2);

    int arr1[count1], arr2[count2], arr3[count1 + count2];
    for (int i = 0; i < count1; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < count2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0;

    for (; i < count1; i++) {
        arr3[i] = arr1[i];
    }

    for (int j = 0; j < count2; j++, i++) {
        arr3[i] = arr2[j];
    }

    for (int i = 0; i < count1 + count2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}