#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    queue<int> q;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    bool flag = true;
    if (s.size() != q.size()) {
        flag = false;
    } else {
        while (!s.empty()) {
            if (s.top() != q.front()) {
                flag = false;
            }

            s.pop();
            q.pop();
        }
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}