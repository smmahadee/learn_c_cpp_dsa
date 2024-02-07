#include <iostream>
#include <vector>

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
    }

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "YES" << endl;
        } else {
            if (mat[a][b] == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
