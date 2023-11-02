#include <stdio.h>

int getLength(char *str, int i) {
    if (str[i] == '\0') return 0;

    return 1 + getLength(str, i + 1);
}

int main() {
    char str[100];
    scanf("%s", str);

    int length = getLength(str, 0);
    printf("%d\n", length);

    return 0;
}