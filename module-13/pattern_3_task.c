#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int k = size;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= k; j++) {
            printf("%d", j);
        }

        k--;

        printf("\n");
    }

    return 0;
}