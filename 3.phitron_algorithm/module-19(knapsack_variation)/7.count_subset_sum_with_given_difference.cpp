#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    int value[n];
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        value[i] = val;
        total += val;
    }

    int diff;
    cin >> diff;

    int s = (total + diff) / 2;

    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            if (value[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - value[i - 1]] + dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}