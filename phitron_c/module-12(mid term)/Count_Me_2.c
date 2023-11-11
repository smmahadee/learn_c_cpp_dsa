#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    scanf("%s", str);

    int total_constant = 0;
    for (int i = 0, n = strlen(str); i < n; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u') {
            total_constant++;
        }
    }

    printf("%d", total_constant);

    return 0;
}