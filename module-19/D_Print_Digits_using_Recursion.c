#include <stdio.h>

void printDigits(int num) {
    if (num < 10) {
        printf("%d ", num);
        return;
    }

    printDigits(num / 10);

    printf("%d ", num % 10);
}

int main() {
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        int num;
        scanf("%d", &num);

        printDigits(num);

        printf("\n");
    }

    return 0;
}