#include <stdio.h>

void printNToONe(int count) {
    if (count <= 1) {
        printf("%d", count);
        return;
    };

    printf("%d ", count);
    printNToONe(count - 1);
}

int main() {
    int count;
    scanf("%d", &count);
    printNToONe(count);

    return 0;
}