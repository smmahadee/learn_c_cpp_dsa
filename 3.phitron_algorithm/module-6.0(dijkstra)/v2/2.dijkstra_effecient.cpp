#include <iostream>
#include <queue>

using namespace std;

vector<pair<int, int> > v[20];
int dis[20];

class cmp {
   public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int> >, cmp> q;
    q.push(make_pair(src, 0));
    dis[src] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.top();
        q.pop();

        int parent = p.first;
        int parentCost = p.second;

        for (pair<int, int> el : v[parent]) {
            int child = el.first;
            int childCost = el.second;
            if (parentCost + childCost < dis[child]) {
                dis[child] = parentCost + childCost;
                q.push(make_pair(child, parentCost + childCost));
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

    return 0;
}