#include <iostream>
#include <queue>

// dfs cycle detection in directed graph by path visit tracking

using namespace std;

vector<int> graph[20];
bool visits[20];
bool pathVisit[20];
bool ans;
int total = 0;

void dfs_cycle_detection(int src) {
    visits[src] = true;
    pathVisit[src] = true;

    for (int i = 0; i < graph[src].size(); i++) {
        int child = graph[src][i];

        if (pathVisit[child]) {
            ans = true;
            total++;
        }

        if (!visits[child]) {
            dfs_cycle_detection(child);
        }
    }

    pathVisit[src] = false;
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
    }

    memset(visits, false, sizeof(visits));
    ans = false;

    for (int i = 0; i < n; i++) {
        if (!visits[i]) {
            dfs_cycle_detection(i);
        }
    }

    if (ans) {
        cout << "Cycle found";
    } else {
        cout << "Cycle not found";
    }

    cout << total;

    return 0;
}