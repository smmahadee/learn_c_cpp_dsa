#include <stdio.h>

int main() {
    long long int memoNum, momoNum, divisibleBy;
    scanf("%lld %lld %lld", &memoNum, &momoNum, &divisibleBy);

    if (memoNum % divisibleBy == 0 && momoNum % divisibleBy == 0) {
        printf("Both");
    } else if (memoNum % divisibleBy == 0) {
        printf("Memo");
    } else if (momoNum % divisibleBy == 0) {
        printf("Momo");
    } else {
        printf("No One");
    }

    return 0;
}