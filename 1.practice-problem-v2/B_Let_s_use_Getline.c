#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    fgets(str, 1000001, stdin);

    for (int i = 0, n = strlen(str); i <= n; i++) {
        if (str[i] == '\\') break;
        printf("%c", str[i]);
    }

    return 0;
}