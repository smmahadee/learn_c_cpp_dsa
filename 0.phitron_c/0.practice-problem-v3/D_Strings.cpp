#include <stdio.h>
#include <string.h>

int main() {
    char s1[11], s2[11];
    scanf("%s", s1);
    scanf("%s", s2);

    printf("%lu %lu\n", strlen(s1), strlen(s2));

    for (int i = 0; i < strlen(s1); i++) {
        printf("%c", s1[i]);
    }

    for (int i = 0; i < strlen(s2); i++) {
        printf("%c", s2[i]);
    }

    printf("\n");

    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;

    for (int i = 0; i < strlen(s1) + strlen(s2); i++) {
        if (i == strlen(s1)) printf(" ");
        if (i < strlen(s1)) {
            printf("%c", s1[i]);
        } else {
            printf("%c", s2[i - strlen(s1)]);
        }
    }

    return 0;
}