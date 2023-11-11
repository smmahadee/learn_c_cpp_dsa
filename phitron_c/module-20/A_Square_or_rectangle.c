#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        int width, height;
        scanf("%d %d", &width, &height);

        if (width == height) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }

    return 0;
}