#include <iostream>

using namespace std;

const int N = 100005;
int dp[N];

bool knapsack(long long int curValue, int n) {
    if (curValue == n) return true;
    if (curValue > n) return false;
    if (dp[curValue] != -1) return dp[curValue];

    return dp[curValue] =
               knapsack(curValue + 3, n) || knapsack(curValue * 2, n);
}
int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;

        for (int i = 0; i <= n; i++) {
            dp[i] = -1;
        }

        int result = knapsack(1, n);
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}