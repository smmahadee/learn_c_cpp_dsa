#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ',') {
            printf(" ");
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        } else {
            printf("%c", str[i] - 32);
        }
    }

    return 0;
}