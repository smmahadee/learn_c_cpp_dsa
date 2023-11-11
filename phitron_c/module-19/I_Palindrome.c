#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);

    int isPallindrome = 1;
    int strLength = strlen(str);

    for (int i = 0; i < strLength / 2; i++) {
        if (str[i] != str[strLength - 1 - i]) {
            isPallindrome = 0;
            break;
        }
    }

    if (isPallindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}