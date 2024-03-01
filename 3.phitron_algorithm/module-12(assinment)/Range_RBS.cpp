#include <iostream>
#include <stack>

using namespace std;

int main() {
    int size;
    cin >> size;

    cin.ignore();
    string s;
    cin >> s;

    int query;
    cin >> query;

    while (query--) {
        int l, r;
        cin >> l >> r;

        stack<char> st;

        for (; l <= r; l++) {
            char ch = s[l];

            if (ch == '?') {
                if (st.empty()) {
                    st.push('(');
                } else {
                    st.pop();
                }
            } else {
                st.push(ch);
            }
        }

        if (!st.empty()) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}