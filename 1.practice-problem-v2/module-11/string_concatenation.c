#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    scanf("%s %s", str1, str2);

    int length_str1 = strlen(str1);
    int length_str2 = strlen(str2);
    
    for (int i = 0; i <= length_str2; i++) {
        str1[i + length_str1] = str2[i];
    }

    printf("%s", str1);

    return 0;
}