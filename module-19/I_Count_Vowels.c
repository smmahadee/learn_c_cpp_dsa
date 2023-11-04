#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    int isVowel = 0;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
        ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        isVowel = 1;
    }

    return isVowel;
}

int countVowels(char *str, int length) {
    if (length < 0) return 0;

    return isVowel(str[length]) + countVowels(str, length - 1);
}

int main() {
    char str[201];
    fgets(str, 201, stdin);

    int result = countVowels(str, strlen(str));
    printf("%d", result);

    return 0;
}