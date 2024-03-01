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

    bool dp[n + 1][total + 1];
    dp[0][0] = true;
    for (int i = 1; i <= total; i++) {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= total; j++) {
            if (value[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j - value[i - 1]] || dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < total; j++)
        {
            cout << dp[i][j] << " ";
        }

        cout << endl;
        
    }
    
    // if(dp[n][total] == true) {
    //     cout << "YES";
    // } else {
    //     cout << "NO";
    // }

    return 0;
}