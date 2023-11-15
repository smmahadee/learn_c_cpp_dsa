#include <stdio.h>
#include <string.h>

int main() {
    char str1[11], str2[11], str3[22];
    scanf("%s %s", str1, str2);
    printf("%lu %lu\n", strlen(str1), strlen(str2));

    strcpy(str3, str1);
    strcpy(str3 + strlen(str3), str2);
    printf("%s\n", str3);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s ", str1);
    printf("%s", str2);

    return 0;
}