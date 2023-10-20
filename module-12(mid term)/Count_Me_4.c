#include <stdio.h>
#include <string.h>

int main() {
    int countArr[26] = {0};
    char str[10001];
    scanf("%s", str);

    for (int i = 0, n = strlen(str); i <= n; i++) {
        int value = str[i] - 'a';
        countArr[value]++;
    }

    for (int i = 0; i < 26; i++) {
        if (countArr[i] != 0) {
            printf("%c - %d\n", i + 'a', countArr[i]);
        }
    }

    return 0;
}