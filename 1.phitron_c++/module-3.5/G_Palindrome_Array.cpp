#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int isPallindrome = 1;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPallindrome = 0;
            break;
        }
    }

    if (isPallindrome) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}