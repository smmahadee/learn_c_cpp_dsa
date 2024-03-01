#include <iostream>
#include <queue>

using namespace std;

vector<int> graph[20];
bool visits[20];
int parentArr[20];
bool ans;

void bfs_cycle_detection(int src) {
    queue<int> q;
    q.push(src);
    visits[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < graph[parent].size(); i++) {
            int child = graph[parent][i];

            if (visits[child] && parentArr[parent] != child) {
                ans = true;
            }

            if (!visits[child]) {
                q.push(child);
                visits[child] = true;
                parentArr[child] = parent;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));
    memset(parentArr, -1, sizeof(parentArr));
    ans = false;

    for (int i = 0; i < n; i++) {
        if (!visits[i]) {
            bfs_cycle_detection(i);
        }
    }

    if (ans) {
        cout << "Cycle found";
    } else {
        cout << "Cycle not found";
    }

    return 0;
}