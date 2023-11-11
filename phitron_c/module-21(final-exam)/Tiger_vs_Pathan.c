#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        int strLength;
        scanf("%d", &strLength);

        char str[strLength + 1];
        scanf("%s", str);

        int tigerPoint = 0, pathanPoint = 0;

        for (int i = 0; i < strLength; i++) {
            if (str[i] == 'P') pathanPoint++;
            if (str[i] == 'T') tigerPoint++;
        }

        if (tigerPoint > pathanPoint) {
            printf("Tiger\n");
        } else if (pathanPoint > tigerPoint) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}