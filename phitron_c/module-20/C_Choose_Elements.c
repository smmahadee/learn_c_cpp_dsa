#include <limits.h>
#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size, numOfElement;
    scanf("%d %d", &size, &numOfElement);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    long long int maxSum = 0;
    for (int i = 0; i < numOfElement; i++) {
        maxSum += arr[i];
    }

    printf("%lld", maxSum);

    return 0;
}