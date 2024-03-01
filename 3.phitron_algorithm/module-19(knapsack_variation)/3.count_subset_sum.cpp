#include <iostream>

using namespace std;

const int N = 1005;
int dp[N][N];

int subset_sum(int n, int value[], int s) {
    if (n == 0) {
        if (s == 0) {
            return true;
        } else {
            return false;
        }
    }

    if (dp[n - 1][s] != -1) {
        return dp[n][s];
    }
    if (value[n - 1] <= s) {
        int op1 = subset_sum(n - 1, value, s - value[n - 1]);
        int op2 = subset_sum(n - 1, value, s);
        return dp[n][s] = op1 + op2;
    } else {
        return dp[n][s] = subset_sum(n - 1, value, s);
    }
}

int main() {
    int n;
    cin >> n;

    int value[n];
    for (int i = 0; i < n; i++) {
        cin >> value[i];
    }

    int s;
    cin >> s;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = -1;
        }
    }

    int result = subset_sum(n, value, s);
    cout<<result<<endl;

    return 0;
}