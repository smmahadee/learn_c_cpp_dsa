#include <limits.h>
#include <stdio.h>

int main() {
    long long int n, m, k, totalItem = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long int minimum = LLONG_MAX;

    if (n <= m && n <= k) {
        minimum = n;
    } else if (m <= n && m <= k) {
        minimum = m;
    } else {
        minimum = k;
    }

    totalItem = minimum;
    n -= minimum;
    m -= minimum;
    k -= minimum;

    if (n <= 1 || k == 0) {
        printf("%lld", totalItem);
        return 0;
    }

    if (k >= n / 2) {
        totalItem += n / 2;
    } else {
        totalItem += k;
    }

    printf("%lld", totalItem);

    return 0;
}