#include <iostream>
#include <queue>

using namespace std;

const int N = 5;
vector<pair<int, int> > graph[N];
int distanceArr[N];

void dijkstra_algorithm(int src) {
    queue<pair<int, int> > q;
    q.push(make_pair(src, 0));
    distanceArr[src] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int parentNode = p.first;
        int parentCost = p.second;
        q.pop();

        for (int i = 0; i < graph[parentNode].size(); i++) {
            pair<int, int> c = graph[parentNode][i];
            int childNode = c.first;
            int childCost = c.second;

            if (parentCost + childCost < distanceArr[childNode]) {
                distanceArr[childNode] = parentCost + childCost;
                q.push(make_pair(childNode, distanceArr[childNode]));
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

        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c));
    }

    for (int i = 0; i < n; i++) {
        distanceArr[i] = INT_MAX;
    }

    dijkstra_algorithm(0);
    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << i << "-> " << distanceArr[i] << endl;
    }

    return 0;
}
// 5 8 
// 0 1 10
// 0 2 7
// 0 3 4
// 1 4 3
// 2 4 5
// 2 1 1
// 3 4 5
// 3 2 1