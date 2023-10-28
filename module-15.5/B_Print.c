#include <stdio.h>

void printOneToN(int num) {
    for (int i = 1; i <= num; i++) {
        printf("%d", i);
        if (i != num) {
            printf(" ");
        }
    }
    // printf("\n");
}
int main() {
    int num;
    scanf("%d", &num);

    printOneToN(num);

    return 0;
}