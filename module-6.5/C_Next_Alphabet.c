#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'z') {
        printf("a");
    } else {
        int num = ch;
        printf("%c", num + 1);
    }

    return 0;
}