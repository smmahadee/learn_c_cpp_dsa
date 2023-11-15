#include <stdio.h>

void printNTimes(int count) {
    if (count == 0) return;

    printNTimes(count - 1);
    printf("I love Recursion\n");
}

int main() {
    int count;
    scanf("%d", &count);
    printNTimes(count);

    return 0;
}