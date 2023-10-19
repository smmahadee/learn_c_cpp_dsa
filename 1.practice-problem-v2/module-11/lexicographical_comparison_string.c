#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    scanf("%s %s", str1, str2);

    int i = 0;
    int result;

    while (1) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            result = 0;
            break;
        } else if (str1[i] == '\0') {
            result = -1;
            break;
        } else if (str2[i] == '\0') {
            result = 1;
            break;
        }

        if (str1[i] < str2[i]) {
            result = -1;
            break;
        } else if (str1[i] > str2[i]) {
            result = 1;
            break;
        } else {
            i++;
        }
    }

    printf("%d", result);

    return 0;
}