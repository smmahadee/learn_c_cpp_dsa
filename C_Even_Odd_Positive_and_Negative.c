#include <stdio.h>

int main() {
    int num, x;
    int even = 0, odd = 0, positive = 0, negaive = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (x > 0) {
            positive++;
        } else if (x < 0) {
            negaive++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd,
           positive, negaive);

    return 0;
}