#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    // printf("%s\n", str1);
    // printf("%s", str2);

    // int length_str2 = strlen(str2);
    // for (int i = 0; i <= strlen(str1); i++) {
    //     str2[i + length_str2] = str1[i];
    // }

    strcpy(str2 + strlen(str2), str1);

    printf("%s", str2);

    return 0;
}