#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    if (count > 0) {
        for (int i = 1; i <= count; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = count; i <= 0; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}