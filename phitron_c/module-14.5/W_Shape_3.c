#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int s = num - 1, k = 1;
    for (int i = 0; i < num * 2; i++) {
        for (int i = 0; i < s; i++) {
            printf(" ");
        }

        for (int j = 0; j < k; j++) {
            printf("*");
        }

        if (i < num - 1) {
            s--;
            k += 2;
        }

        if (i > num - 1) {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}