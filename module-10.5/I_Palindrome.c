#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);

    int flag = 1;
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}