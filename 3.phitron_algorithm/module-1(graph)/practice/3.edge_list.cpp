#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int> > edges;
    int mat[n][n];

    while (e--) {
        int a, b;
        cin >> a >> b;

        edges.push_back(make_pair(1, b));
    }

    for (int i = 0; i < edges.size(); i++) {
        cout << edges[i].first << " " << edges[i].second << endl;
    }

    return 0;
}

// 6 7
// 1 2
// 2 3
// 3 4
// 2 4
// 1 6
// 1 5
// 5 6