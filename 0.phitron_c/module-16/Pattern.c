#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int s = num - 1, k = 1, elementType = 0;
    for (int i = 1; i <= (2 * num) - 1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = 1; j <= k; j++) {
            if (elementType == 0) {
                printf("#");
            } else {
                printf("-");
            }
        }

        if (i <= num - 1) {
            s--;
            k += 2;
        } else {
            s++;
            k -= 2;
        }

        if (elementType == 0) {
            elementType = 1;
        } else {
            elementType = 0;
        }

        printf("\n");
    }

    return 0;
}