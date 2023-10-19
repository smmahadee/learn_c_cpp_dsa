#include <stdio.h>
#include <string.h>

int main() {
    int arrSize, countArrSize;
    scanf("%d %d", &arrSize, &countArrSize);

    int countArr[countArrSize];
    for (int i = 0; i <= countArrSize; i++) {
        countArr[i] = 0;
    }

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrSize; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 0; i <= countArrSize; i++) {
        if (i != 0) {
            printf("%d\n", countArr[i]);
        }
    }

    return 0;
}