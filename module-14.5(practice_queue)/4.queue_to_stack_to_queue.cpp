#include <iostream>
#include <queue>
#include <stack>

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

    stack<int> copyQ;
    while (!q.empty()) {
        copyQ.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while (!copyQ.empty()) {
        q2.push(copyQ.top());
        copyQ.pop();
    }

    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }

    return 0;
}