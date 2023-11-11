#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    int asciiCode = ch;
    if (asciiCode >= 65 && asciiCode <= 90) {
        printf("%c\n", asciiCode + 32);
    } else {
        printf("%c\n", asciiCode - 32);
    }

    return 0;
}