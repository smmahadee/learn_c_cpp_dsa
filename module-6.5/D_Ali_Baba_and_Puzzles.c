#include <stdio.h>

int main() {
    int a, b, c;
    long long int total;
    scanf("%d %d %d %lld", &a, &b, &c, &total);
    if (a + b * c == total || a + b - c == total || a - b * c == total ||
        a - b + c == total || a * b + c == total || a * b - c == total) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}