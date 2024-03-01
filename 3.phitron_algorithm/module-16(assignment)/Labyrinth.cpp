#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX_N = 1000;
char grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
pair<int, int> parent[MAX_N][MAX_N];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // right, left, up, down

int n, m;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}

void bfs(pair<int, int> start, pair<int, int> end) {
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        if (current == end) // if end is reached, stop BFS
            break;

        for (auto dir : directions) {
            int newX = current.first + dir.first;
            int newY = current.second + dir.second;

            if (isValid(newX, newY) && !visited[newX][newY]) {
                visited[newX][newY] = true;
                parent[newX][newY] = current;
                q.push({newX, newY});
            }
        }
    }
}

string getPath(pair<int, int> start, pair<int, int> end) {
    string path = "";
    pair<int, int> current = end;

    while (current != start) {
        pair<int, int> prev = parent[current.first][current.second];
        if (prev.first == current.first) {
            if (prev.second < current.second) path += 'L';
            else path += 'R';
        } else {
            if (prev.first < current.first) path += 'U';
            else path += 'D';
        }
        current = prev;
    }

    reverse(path.begin(), path.end());
    return path;
}

int main() {
    cin >> n >> m;

    pair<int, int> start, end;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') start = {i, j};
            if (grid[i][j] == 'B') end = {i, j};
        }
    }

    memset(visited, false, sizeof(visited));
    bfs(start, end);

    if (visited[end.first][end.second]) {
        cout << "YES" << endl;
        string path = getPath(start, end);
        cout << path.size() << endl;
        cout << path << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
