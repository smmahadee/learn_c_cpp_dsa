#include <iostream>
#include <stack>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    cin.ignore();

    while (testCase--) {
        stack<char> s;

        string str;
        cin >> str;

        for (char ch : str) {
            if (ch == '0') {
                s.push(ch);
            } else {
                if (!s.empty() && s.top() == '0') {
                    s.pop();
                } else {
                    s.push(ch);
                }
            }
        }

        if (s.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}