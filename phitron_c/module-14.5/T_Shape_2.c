#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int s = num - 1, k = 1;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = 0; j < k; j++) {
            printf("*");
        }

        s--;
        k += 2;

        printf("\n");
    }

    return 0;
}