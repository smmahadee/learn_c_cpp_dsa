#include <iostream>
#include <queue>

using namespace std;

vector<int> arr[1000];
bool visits[1000];

void print_level_node_bfs(int src, int level) {
    queue<pair<int, int> > q;
    vector<int> elements;

    q.push(make_pair(src, 0));

    visits[src] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int parent = p.first;
        int parentLevel = p.second;
        q.pop();

        if (parentLevel == level) {
            elements.push_back(parent);
        }

        for (int i = 0; i < arr[parent].size(); i++) {
            int child = arr[parent][i];
            if (!visits[child]) {
                q.push(make_pair(child, parentLevel + 1));
                visits[child] = true;
            }
        }
    }

    reverse(elements.begin(), elements.end());

    for (int v : elements) {
        cout << v << " ";
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

    int level;
    cin >> level;

    print_level_node_bfs(0, level);

    return 0;
}