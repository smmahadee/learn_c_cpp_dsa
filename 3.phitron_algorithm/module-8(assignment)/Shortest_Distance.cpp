#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    long long int adj[105][105];
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            adj[i][j] = LLONG_MAX;
            if (i == j) adj[i][j] = 0;
        }
    }

    while (e--) {
        int a, b;
        long long int c;
        cin >> a >> b >> c;

        if (adj[a][b] > c) {
            adj[a][b] = c;
        }
    }

    for (int k = 0; k < 105; k++) {
        for (int i = 0; i < 105; i++) {
            for (int j = 0; j < 105; j++) {
                if (adj[i][k] < LLONG_MAX && adj[k][j] < LLONG_MAX &&
                    adj[i][k] + adj[k][j] < LLONG_MAX &&
                    adj[i][k] + adj[k][j] < adj[i][j]) {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int query;
    cin >> query;

    while (query--) {
        int x, y;
        cin >> x >> y;

        if (adj[x][y] < LLONG_MAX) {
            cout << adj[x][y] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}