#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int s = size - 1, k = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }

        for (int j = 0; j < k; j++) {
            printf("*");
        }

        s -= 1;
        k += 2;

        printf("\n");
    }

    return 0;
}