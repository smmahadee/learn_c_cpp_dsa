#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int value[n];
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }

    int total;
    cin >> total;

    int dp[n + 1][total + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= total; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= total; j++) {
            if (value[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - value[i - 1]] + dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout<<dp[n][total]<<endl;

    return 0;
}