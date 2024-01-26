#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    while (e--) {
        int a, b;
        cin >> a >> b;

        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int a, b;
        cin >> a >> b;

        if (mat[a][b] == 1) {
            cout << "Valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}

// 4
// 4
// 2 3
// 3 1
// 1 4
// 2 4