#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    while (n--) {
        int val;
        cin >> val;
        s.push(val);
    }

    while (m--) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (s.size() != q.size()) {
        cout << "NO";
        return 0;
    }
    
    while (!s.empty()) {
        if (s.top() != q.front()) {
            cout << "NO";
            return 0;
        }

        s.pop();
        q.pop();
    }

    cout << "YES";

    return 0;
}