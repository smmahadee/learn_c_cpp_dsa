#include <iostream>
#include <queue>

using namespace std;

vector<int> arr[1000];
bool visitArr[1000];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visitArr[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int i = 0; i < arr[parent].size(); i++) {
            int children = arr[parent][i];

            if (visitArr[children] == false) {
                q.push(arr[parent][i]);
                visitArr[children] = true;
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

    memset(visitArr, false, sizeof(visitArr));

    int src;
    cin >> src;

    bfs(src);

    return 0;
}

// 7
// 1 2
// 2 3
// 3 4
// 1 4
// 4 5
// 5 6
// 1 6