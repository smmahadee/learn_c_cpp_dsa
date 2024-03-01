#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n, s;
        cin >> n >> s;

        int value[n];
        for (int i = 0; i < n; i++) {
            cin >> value[i];
        }

        if (s == 1000) {
            cout << "YES" << endl;
        } else {
            s = 1000 - s;
            bool dp[n + 1][s + 1];
            dp[0][0] = true;
            for (int i = 1; i <= s; i++) {
                dp[0][i] = false;
            }

            for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= s; j++) {
                    if (value[i - 1] <= j) {
                        dp[i][j] = dp[i - 1][j - value[i - 1]] || dp[i - 1][j];
                    } else {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            if (dp[n][s]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}