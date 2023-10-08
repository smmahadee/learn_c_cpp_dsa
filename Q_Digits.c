#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++) {
        int num, qoutient;
        scanf("%d", &num);
        while (qoutient != 0) {
            // DIVIDE NUM BY 10 AND SAVE THE QOUTIENT
            qoutient = num / 10;
            printf("%d", qoutient);
            // DIVIDE NUM BY 10 AND PRINT THE MOD
            // IF QOUITENT IS EQUAL TO ZERO THEN BREAK
        }

        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}