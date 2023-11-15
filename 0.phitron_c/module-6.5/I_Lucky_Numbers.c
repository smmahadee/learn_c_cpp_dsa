#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int qoutient = num / 10;
    int remainder = num % 10 == 0 ? qoutient : num % 10;

    if (qoutient % remainder == 0 || remainder % qoutient == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}