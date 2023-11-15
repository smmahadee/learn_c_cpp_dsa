#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int num1 = num / 10;
    int num2 = num % 10;

    if (num1 == 0 || num2 == 0) {
        printf("YES");
    } else if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}