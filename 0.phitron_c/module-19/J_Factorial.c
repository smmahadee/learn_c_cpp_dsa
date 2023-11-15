#include <stdio.h>

long long int getFactorial(long long int num) {
    if (num == 0) return 1;

    return num * getFactorial(num - 1);
}

int main() {
    long long int num;
    scanf("%lld", &num);

   long long int result = getFactorial(num);
    printf("%lld", result);

    return 0;
}