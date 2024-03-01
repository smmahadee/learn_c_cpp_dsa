#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0;
    int value[n];
    for (int i = 0; i < n; i++) {
        cin >> value[i];
        s += value[i];
    }

    if (s % 2 == 0) {
        s = s / 2;
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
        if (dp[n][s] == true) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }

    return 0;
}