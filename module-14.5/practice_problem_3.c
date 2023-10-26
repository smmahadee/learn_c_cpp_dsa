#include <stdio.h>

int char_to_ascii(char ch) {
    int aschii_value = ch;
    return aschii_value;
}

int main() {
    char ch;
    scanf("%c", &ch);

    int aschii_value = char_to_ascii(ch);
    printf("%d\n", aschii_value);

    return 0;
}