#include <stdio.h>

int my_len(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') return i;
        i++;
    }

    return i;
}

int main() {
    char str[100];
    fgets(str, 100, stdin);

    int length = my_len(str);
    printf("%d\n", length);

    return 0;
}