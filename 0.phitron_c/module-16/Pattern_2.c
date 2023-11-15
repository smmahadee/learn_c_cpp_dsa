#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int s = num - 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        s--;

        printf("\n");
    }

    return 0;
}