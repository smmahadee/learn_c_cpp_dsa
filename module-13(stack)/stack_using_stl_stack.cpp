#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    
    // s.push(10);
    // s.pop();
    // s.push(20);
    // cout<<s.top();
    // cout<<s.size();
    // cout<<s.empty();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    while (s.empty() == false) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}