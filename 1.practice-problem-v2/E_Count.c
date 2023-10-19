#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < strlen(str); i++) {
        sum += str[i] - '0';
    }

    printf("%d", sum);

    return 0;
}