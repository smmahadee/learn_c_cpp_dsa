#include <stdio.h>

int main() {
    int num, x, max = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        scanf("%d", &x);
        if (x > max) max = x;
    }
    printf("%d", max);
    return 0;
}