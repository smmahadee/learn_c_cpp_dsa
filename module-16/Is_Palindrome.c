#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int result = 1;
    int strLength = strlen(str);

    for (int i = 0; i < strLength / 2; i++) {
        if (str[i] != str[strLength - 1 - i]) {
            result = 0;
            break;
        }
    }

    return result;
}

int main() {
    char str[1001];
    scanf("%s", str);
    int result = is_palindrome(str);
    if (result == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}