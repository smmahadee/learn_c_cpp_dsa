#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int M;
    cin >> M;

    int* arr2 = new int[M];

    for (int i = 0; i < N; i++) {
        arr2[i] = arr[i];
    }

    delete[] arr;

    for (int i = N; i < M; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < M; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}