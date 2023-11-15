#include <stdio.h>
#include <stdlib.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        int size;
        scanf("%d", &size);

        int a[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &a[i]);
        }

        int b[size];
        for (int i = 0; i < size; i++) {
            b[i] = a[i];
        }

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (b[i] > b[j]) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[size];
        for (int i = 0; i < size; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < size; i++) {
            printf("%d ", c[i]);
        }
        
        printf("\n");
    }

    return 0;
}