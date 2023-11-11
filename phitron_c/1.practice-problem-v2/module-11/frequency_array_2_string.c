#include <stdio.h>
#include <string.h>

int main() {
    int countArr[26] = {0};

    char str[100];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        int position = str[i] - 'a';
        countArr[position]++;
    }

    for (int i = 0; i < strlen(str); i++) {
        int value = str[i] - 'a';
        if (countArr[value] > 0) {
            printf("%c - %d\n", value + 'a', countArr[value]);
            countArr[value] = 0;
        }
    }

    // for (int i = 0; i < 26; i++) {
    //     if (countArr[i] > 0) {
    //         printf("%c - %d\n", i + 'a', countArr[i]);
    //     }
    // }

    return 0;
}