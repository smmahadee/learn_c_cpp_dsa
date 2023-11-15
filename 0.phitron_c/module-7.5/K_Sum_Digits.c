#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char A[N + 1];
    scanf("%s", A);

    int total = 0;
    for (int i = 0; i < N; i++) {
        total += A[i] - '0';  
    }

    printf("%d\n", total);

    return 0;
}