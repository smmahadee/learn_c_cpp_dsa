#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = size; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}