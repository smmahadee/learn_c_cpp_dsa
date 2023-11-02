#include <stdio.h>

void printOneToFive(int num) {
    if (num <= 0) return;

    printOneToFive(num - 1);
    printf("%d ", num);
}

int main() {
    printOneToFive(5);

    return 0;
}