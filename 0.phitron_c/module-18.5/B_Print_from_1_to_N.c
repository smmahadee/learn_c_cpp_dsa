#include <stdio.h>

void printOnetoN(int count) {
    if (count == 0) return;

    printOnetoN(count - 1);
    printf("%d\n", count);
}

int main() {
    int count;
    scanf("%d", &count);
    printOnetoN(count);

    return 0;
}