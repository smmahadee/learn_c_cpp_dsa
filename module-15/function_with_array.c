#include <stdio.h>

void sendArray(int *arr) { 
    
    printf("%d\n", 1[arr]);
    printf("%d\n", *(arr + 1));

 }

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    sendArray(arr);

    return 0;
}