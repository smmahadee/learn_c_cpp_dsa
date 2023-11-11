#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int lessDaysCount = d - (m1 * d) / (m1 + m2);
        printf("%d\n", lessDaysCount);
    }

    return 0;
}