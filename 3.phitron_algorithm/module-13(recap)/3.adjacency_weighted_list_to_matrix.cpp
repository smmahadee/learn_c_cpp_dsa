#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int> > graph[n];

    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c));
    }

    int matrixGraph[n][n];
    memset(matrixGraph, -1, sizeof(matrixGraph));

    for (int i = 0; i < n; i++) {
        for(pair<int, int> el : graph[i]) {
            matrixGraph[i][el.first] = el.second;
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