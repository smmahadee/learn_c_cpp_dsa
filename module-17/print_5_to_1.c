#include <stdio.h>

void printOneToFive(int num) {
    if (num <= 0) return;

    printf("%d ", num);
    printOneToFive(num - 1);
}

int main() {
    printOneToFive(5);

    return 0;
}