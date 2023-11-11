#include <stdio.h>

// void resetElement(int *arr);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    // resetElement(arr);

    int num = 4;
    printf("%lu", sizeof(num) / sizeof(int));
    printf("%lu", sizeof(arr));

    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}

// void resetElement(int *arr) {
//     for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//         arr[i] = 0;
//     }
// }