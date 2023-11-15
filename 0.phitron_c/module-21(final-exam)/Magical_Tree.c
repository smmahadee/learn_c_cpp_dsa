#include <stdio.h>

int main() {
    int bodyWidth, bodyHeight = 5;
    scanf("%d", &bodyWidth);

    int leafHeight = 5;
    for (int i = 1; i <= bodyWidth; i += 2) {
        leafHeight++;
    }

    int spaceCount = leafHeight - 1;
    int starCount = 1;

    for (int i = 0; i < leafHeight + bodyHeight; i++) {
        for (int j = 0; j < spaceCount; j++) {
            printf(" ");
        }
        for (int j = 0; j < starCount; j++) {
            printf("*");
        }

        printf("\n");

        if (i < leafHeight - 1) {
            spaceCount--;
            starCount += 2;

        } else {
            spaceCount = leafHeight - (bodyWidth / 2) - 1;
            starCount = bodyWidth;
        }
    }

    return 0;
}