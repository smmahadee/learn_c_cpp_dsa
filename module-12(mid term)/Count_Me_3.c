#include <stdio.h>
#include <string.h>

int main() {
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++) {
        char str[10001];
        scanf("%s", str);

        int small_letter = 0, capital_letter = 0, digits = 0;
        for (int i = 0, n = strlen(str); i < n; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                small_letter++;
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                capital_letter++;
            } else {
                digits++;
            }
        }

        printf("%d %d %d\n", capital_letter, small_letter, digits);
    }

    return 0;
}