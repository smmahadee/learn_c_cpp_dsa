#include <iostream>
#include <queue>

using namespace std;

int grid[20][20];
bool vis[20][20];
int n, m;

// vector<pair<int, int> > elements = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValidRowColumn(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int srcI, int srcJ) {
    queue<pair<int, int> > q;
    q.push(make_pair(srcI, srcJ));
    vis[srcI][srcJ] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        int parI = p.first;
        int parJ = p.second;

        cout << parI << " " << parJ << endl;

        for (pair<int, int> el : elements) {
            int childI = parI + el.first;
            int childJ = parJ + el.second;

            if (isValidRowColumn(childI, childJ) && !vis[childI][childJ]) {
                q.push(make_pair(childI, childJ));
                vis[childI][childJ] = true;
            }
        }
    }
}

void dfs(int srcI, int srcJ) {
    cout << srcI << " " << srcJ << endl;
    vis[srcI][srcJ] = true;

    for (pair<int, int> el : elements) {
        int childI = srcI + el.first;
        int childJ = srcJ + el.second;

        if (isValidRowColumn(childI, childJ) && !vis[childI][childJ]) {
            dfs(childI, childJ);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            grid[i][j] = 1;
        }
    }

    initializeElements();
    memset(vis, false, sizeof(vis));

    int srcI = 1;
    int srcJ = 1;
    bfs(srcI, srcJ);

    return 0;
}