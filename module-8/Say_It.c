#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("%d. I Want More Assignments\n", i + 1);
    }

    return 0;
}