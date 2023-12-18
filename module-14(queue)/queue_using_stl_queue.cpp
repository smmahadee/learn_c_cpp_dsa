#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}