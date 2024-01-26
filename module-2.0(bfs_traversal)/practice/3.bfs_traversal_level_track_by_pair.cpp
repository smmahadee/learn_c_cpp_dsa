#include <iostream>
#include <queue>

using namespace std;

vector<int> arr[1000];
bool visits[1000];

void bfs_with_level(int src, int el) {
    queue<pair<int, int> > q;
    q.push(make_pair(src, 0));
    visits[src] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int parent = p.first;
        int parentLevel = p.second;
        q.pop();

        if (parent == el) {
            cout << parent << " " << parentLevel << endl;
        }

        for (int i = 0; i < arr[parent].size(); i++) {
            int children = arr[parent][i];
            if (visits[children] == false) {
                q.push(make_pair(arr[parent][i], parentLevel + 1));
                visits[children] = true;
            }
        }
    }
}

int main() {
    int e;
    cin >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int src, el;
        cin >> src >> el;

        memset(visits, false, sizeof(visits));
        bfs_with_level(src, el);
    }

    return 0;
}
