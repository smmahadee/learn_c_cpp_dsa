#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        long long int total;
        int m1, m2, m3;
        scanf("%lld %d %d %d", &total, &m1, &m2, &m3);

        long long int multipleOfThree = m1 * m2 * m3;

        if (total % multipleOfThree != 0) {
            printf("-1\n");
        } else {
            printf("%lld\n", total / multipleOfThree);
        }
    }

    return 0;
}