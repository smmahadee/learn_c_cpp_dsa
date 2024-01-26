#include <iostream>
#include <queue>

using namespace std;

vector<int> arr[1000];
bool visits[1000];
int levels[1000];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visits[src] = true;
    levels[src] = 0;

    while (!q.empty()) {
        int parent = q.front();
        int parentlevel = levels[parent];
        q.pop();

        for (int i = 0; i < arr[parent].size(); i++) {
            int children = arr[parent][i];
            if (visits[children] == false) {
                q.push(arr[parent][i]);
                visits[children] = true;
                levels[children] = parentlevel + 1;
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

    memset(visits, false, sizeof(visits));
    memset(levels, -1, sizeof(levels));

    int src;
    cin >> src;

    bfs(src);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int el;
        cin >> el;

        if (el < 1000) {
            cout << levels[el] << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}