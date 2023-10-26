#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int s = size * 2 - 1, k = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < k; j++) {
            printf(" ");
        }

        for (int j = 0; j < s; j++) {
            printf("*");
        }

        s -= 2;
        k++;

        printf("\n");
    }

    return 0;
}