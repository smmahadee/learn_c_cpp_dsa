#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        int size, queryValue;
        scanf("%d", &size);

        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &queryValue);

        int result = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == queryValue) {
                result = 1;
                break;
            }
        }

        if (result == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}