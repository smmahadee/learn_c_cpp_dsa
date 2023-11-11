#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", 1);
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) printf("%d\n", i);
    }
    printf("%d\n", num);

    return 0;
}