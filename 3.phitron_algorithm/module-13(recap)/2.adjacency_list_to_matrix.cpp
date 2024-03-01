#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> graph[n];

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int matrixGraph[n][n];
    memset(matrixGraph, 0, sizeof(matrixGraph));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            matrixGraph[i][graph[i][j]] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrixGraph[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}