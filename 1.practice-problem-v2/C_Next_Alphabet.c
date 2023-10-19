#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch < 'z') {
        printf("%c", ch + 1);
    } else {
        printf("%c", 'a');
    }

    return 0;
}