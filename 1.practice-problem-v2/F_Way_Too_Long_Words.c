#include <stdio.h>
#include <string.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        char str[101];
        scanf("%s", str);

        int length = strlen(str);
        if (length <= 10) {
            printf("%s\n", str);
        } else {
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }
    }

    return 0;
}