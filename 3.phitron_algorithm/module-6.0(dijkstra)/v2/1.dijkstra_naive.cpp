#include <iostream>
#include <queue>

using namespace std;

vector<pair<int, int> > v[20];
int dis[20];

void dijkstra(int src) {
    queue<pair<int, int> > q;
    q.push(make_pair(src, 0));
    dis[src] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        int parent = p.first;
        int parentCost = p.second;

        for (pair<int, int> el : v[parent]) {
            int child = el.first;
            int childCost = el.second;
            if (parentCost + childCost < dis[child]) {
                q.push(make_pair(child, parentCost + childCost));
                dis[child] = parentCost + childCost;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }

    for (int i = 0; i < 20; i++) {
        dis[i] = INT_MAX;
    }

    int src;
    cin >> src;
    dijkstra(src);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int des;
        cin >> des;

        cout << dis[des] << endl;
    }

    return 0;
}

// 5 8
// 0 1 10
// 0 2 7
// 0 3 4
// 1 4 3
// 1 2 1
// 2 4 5
// 2 3 1
// 3 4 5