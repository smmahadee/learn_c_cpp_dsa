#include <iostream>
#include <queue>

using namespace std;

vector<pair<int, long long int> > graph[1005];
long long int dis[1005];

class cmp {
   public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }
};

void dijkstra_algorithm(int src) {
    priority_queue<pair<int, long long int>, vector<pair<int, long long int> >,
                   cmp>
        q;
    q.push(make_pair(src, 0));
    dis[src] = 0;

    while (!q.empty()) {
        pair<int, long long int> p = q.top();
        int parentNode = p.first;
        long long int parentCost = p.second;
        q.pop();

        for (size_t i = 0; i < graph[parentNode].size(); i++) {
            pair<int, long long int> c = graph[parentNode][i];
            int childNode = c.first;
            long long int childCost = c.second;

            long long int parentPlusChildCost = parentCost + childCost;
            if (parentPlusChildCost < dis[childNode]) {
                dis[childNode] = parentPlusChildCost;
                q.push(make_pair(childNode, parentPlusChildCost));
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        long long int c;
        cin >> a >> b >> c;

        graph[a].push_back(make_pair(b, c));
    }

    for (int i = 0; i < 1005; i++) {
        dis[i] = LLONG_MAX;
    }

    int src;
    cin >> src;
    dijkstra_algorithm(src);

    int testCase;
    cin >> testCase;
    while (testCase--) {
        int d;
        long long int dw;
        cin >> d >> dw;

        if (dis[d] <= dw) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    // for (int i = 0; i < 1005; i++) {
    //     if (dis[i] != LLONG_MAX) {
    //         cout << i << "-> " << dis[i] << endl;
    //     }
    // }

    return 0;
}
