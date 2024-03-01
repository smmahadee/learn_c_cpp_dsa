#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

int n;
int grid[30][30];
bool vis[30][30];
int dis[30][30];

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}
bool isValid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < n; }

void bfs(int si, int sj) {
    queue<pair<int, int> > q;
    q.push(make_pair(si, sj));
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < elements.size(); i++) {
            pair<int, int> el = elements[i];
            int ci = p.first + el.first;
            int cj = p.second + el.second;

            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != 'T') {
                q.push(make_pair(ci, cj));
                vis[ci][cj] = true;
                dis[ci][cj] = dis[p.first][p.second] + 1;
            }
        }
    }
}

int main() {
    cin >> n;

    initializeElements();
    int srcI, srcJ, desI, desJ;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char input;
            cin >> input;
            grid[i][j] = input;

            if (input == 'S') {
                srcI = i;
                srcJ = j;
            }

            if (input == 'E') {
                desI = i;
                desJ = j;
            }
        }
    }

    bfs(srcI, srcJ);

    cout << dis[desI][desJ];

    return 0;
}