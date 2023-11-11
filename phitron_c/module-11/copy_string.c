#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    strcpy(str1 + strlen(str1), str2);

    // for (int i = 0, n = strlen(str2); i <= n; i++) {
    //     str1[i] = str2[i];
    // }

    printf("%s\n", str1);

    return 0;
}