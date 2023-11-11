// COUNT CHARACTER FORM A STRING

#include <stdio.h>
#include <string.h>

int main() {
    // char str[100];
    // int count[26] = {0};

    // scanf("%s", str);
    // for (int i = 0; i < strlen(str); i++) {
    //     int index = str[i] - 97;
    //     count[index]++;
    // }

    // for (int i = 0; i < 26; i++) {
    //     if (count[i] != 0) printf("Total %c is - %d\n", i + 97, count[i]);
    // }

    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);
    printf("%d", result);

    return 0;
}