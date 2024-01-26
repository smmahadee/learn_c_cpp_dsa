#include <iostream>
#include <stack>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        stack<char> s1;
        stack<char> s2;

        string str;
        cin >> str;

        for (char ch : str) {
            if (ch == '0') {
                s1.push(ch);
            } else {
                s2.push(ch);
            }
        }

        if (s1.size() == s2.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}