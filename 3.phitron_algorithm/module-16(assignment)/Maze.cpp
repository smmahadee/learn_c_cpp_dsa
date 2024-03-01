#include <iostream>
#include <map>
#include <queue>

#define pi pair<int, int>

using namespace std;

const int N = 1e3 + 5;
char grid[N][N];
bool vis[N][N];
map<pi, pi> par;
int n, m;

// vector<pair<int, int> > elements = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }

void bfs(pi src, pi des) {
    queue<pi> q;
    q.push(src);
    vis[src.first][src.second] = true;

    while (!q.empty()) {
        pi parent = q.front();
        q.pop();

        for (pi el : elements) {
            int ci = parent.first + el.first;
            int cj = parent.second + el.second;

            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#') {
                vis[ci][cj] = true;
                par[make_pair(ci, cj)] = make_pair(parent.first, parent.second);
                q.push(make_pair(ci, cj));
            }
        }
    }
}

int main() {
    initializeElements();
    cin >> n >> m;

    cin.ignore();
    pi src, des;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char input;
            cin >> input;
            grid[i][j] = input;

            if (input == 'R') src = make_pair(i, j);
            if (input == 'D') des = make_pair(i, j);
        }
    }

    memset(vis, false, sizeof(vis));

    bfs(src, des);

    if (par[make_pair(des.first, des.second)] == make_pair(0, 0)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    } else {
        pi x = des;
        while (x != src) {
            x = par[make_pair(x.first, x.second)];
            if (x == src) break;
            grid[x.first][x.second] = 'X';
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}