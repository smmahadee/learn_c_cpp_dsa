#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int v[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                v[i][j] = 0;
            } else {
                v[i][j] = INT_MAX;
            }
        }
    }

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;

        v[a][b] = c;
    }
    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == INT_MAX) {
                cout << "INF"
                     << " ";
            } else {
                cout << v[i][j] << " ";
            }
        }

        cout << endl;
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][k] != INT_MAX && v[k][j] != INT_MAX &&
                    v[i][k] + v[k][j] < v[i][j]) {
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }

    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == INT_MAX) {
                cout << "INF"
                     << " ";
            } else {
                cout << v[i][j] << " ";
            }
        }

        cout << endl;
    }

    // cout << v[0][1];

    return 0;
}