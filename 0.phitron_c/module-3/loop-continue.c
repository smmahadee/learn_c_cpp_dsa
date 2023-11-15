#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i = i + 1) {
        if (i % 2 != 0) continue;
        printf("%d\n", i);
    }
    return 0;
}