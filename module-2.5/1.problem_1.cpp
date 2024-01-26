#include <iostream>
#include <queue>

using namespace std;

vector<int> arr[1000];
bool visits[1000];

void print_level_by_bfs(int src, int el) {
    queue<pair<int, int> > q;
    q.push(make_pair(src, 0));
    visits[src] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int parent = p.first;
        int parentLevel = p.second;
        q.pop();

        if (el == parent) {
            cout << parentLevel << endl;
            return;
        }

        for (int i = 0; i < arr[parent].size(); i++) {
            int child = arr[parent][i];
            if (!visits[child]) {
                q.push(make_pair(child, parentLevel + 1));
                visits[child] = true;
            }
        }
    }

    cout<< -1<<endl;
    return;
}

int main() {
    int n, e;
    cin >> n >> e;

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

        print_level_by_bfs(src, el);
    }

    return 0;
}