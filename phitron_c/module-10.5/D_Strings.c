#include <stdio.h>
#include <string.h>

int main() {
    char str1[11], str2[11];
    scanf("%s", str1);
    scanf("%s", str2);

    printf("%lu %lu\n", strlen(str1), strlen(str2));
    printf("%s%s\n", str1, str2);
    for (int i = 0; i < strlen(str1); i++) {
        if (i == 0) {
            printf("%c", str2[i]);

        } else {
            printf("%c", str1[i]);
        }
    }
    printf(" ");
    for (int i = 0; i < strlen(str2); i++) {
        if (i == 0) {
            printf("%c", str1[i]);

        } else {
            printf("%c", str2[i]);
        }
    }

    return 0;
}