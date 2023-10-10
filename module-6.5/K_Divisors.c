#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("1\n");
        return 0;
    }

    printf("1\n");

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) printf("%d\n", i);
    }
    printf("%d\n", num);
    return 0;
}