#include <stdio.h>

int my_abs(int num) {
    if (num >= 0) {
        return num;
    } else {
        return num * -1;
    }
}

int main() {
    int num;
    scanf("%d", &num);

    int value = my_abs(num);
    printf("%d", value);

    return 0;
}