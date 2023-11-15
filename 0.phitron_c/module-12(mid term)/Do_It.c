#include <stdio.h>

int main() {
    int times, size;
    scanf("%d %d", &times, &size);

    for (int i = 0; i < times; i++) {
        for (int i = 1; i <= size; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}