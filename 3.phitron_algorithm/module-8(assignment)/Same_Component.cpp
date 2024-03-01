#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 1e3 + 5;
char arr[N][N];
bool visits[N][N];
int n, m;

vector<pair<int, int> > elements = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j) { return (i >= 0 && i < n && j >= 0 && j < m); }

bool bfs_traversal(int srcI, int srcJ, pair<int, int> to) {
    queue<pair<int, int> > q;
    q.push(make_pair(srcI, srcJ));
    visits[srcI][srcJ] = true;

    bool canGo = false;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int a = p.first;
        int b = p.second;
        q.pop();

        if (a == to.first && b == to.second) {
            canGo = true;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int childI = a + elements[i].first;
            int childJ = b + elements[i].second;

            if (isValid(childI, childJ) && !visits[childI][childJ] &&
                arr[childI][childJ] != '-') {
                q.push(make_pair(childI, childJ));
                visits[childI][childJ] = true;
            }
        }
    }

    return canGo;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            arr[i][j] = ch;
        }
    }

    memset(visits, false, sizeof(visits));

    pair<int, int> from;
    cin >> from.first >> from.second;

    pair<int, int> to;
    cin >> to.first >> to.second;

    bool result = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == from.first && j == from.second) {
                result = bfs_traversal(i, j, to);
                break;
            }
        }
        if (result) break;
    }

    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
