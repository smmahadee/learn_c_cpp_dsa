#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int> > edges;
    while (e--) {
        int a, b;
        cin >> a >> b;

        // edges.push_back(make_pair(a,b));
        edges.push_back({a, b});
    }

    // 1.
    for (int i = 0; i < edges.size(); i++) {
        cout << edges[i].first << " " << edges[i].second << endl;
    }

    // 2.
    for (pair<int, int> p : edges) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}