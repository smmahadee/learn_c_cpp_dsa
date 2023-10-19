#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    char str[size];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += str[i] - 48;
    }

    printf("%d", sum);

    return 0;
}