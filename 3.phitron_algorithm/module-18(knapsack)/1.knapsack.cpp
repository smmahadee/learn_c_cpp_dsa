#include <iostream>

using namespace std;

int knapsack(int n, int weight[], int value[], int w) {
    if (n < 0 || w == 0) return 0;

    if (weight[n] <= w) {
        int op1 = knapsack(n - 1, weight, value, w - weight[n]) + value[n];
        int op2 = knapsack(n - 1, weight, value, w);

        return max(op1, op2);
    } else {
        int op2 = knapsack(n - 1, weight, value, w);
        return op2;
    }
}

int main() {
    int n;
    cin >> n;

    int value[n], weight[n];

    for (int i = 0; i < n; i++) {
        int wei;
        cin >> wei;
        weight[i] = wei;
    }

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        value[i] = val;
    }

    int w;
    cin >> w;

    cout << knapsack(n - 1, weight, value, w);

    return 0;
}