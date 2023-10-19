#include <stdio.h>
#include <string.h>

int main() {
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    printf("%lu %lu\n", strlen(str1), strlen(str2));
    printf("%s %s", str1, str2);

    return 0;
}