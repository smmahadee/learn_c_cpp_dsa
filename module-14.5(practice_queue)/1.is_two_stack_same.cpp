#include <iostream>
#include <vector>

using namespace std;

class MyStack {
   public:
    vector<int> v;

   public:
    void push(int val) { v.push_back(val); }

    void pop() { v.pop_back(); }

    int top() { return v.back(); }

    int size() { return v.size(); }

    bool isEmpty() {
        if (v.size() == 0) {
            return true;
        } else {
            return false;
        }
    }

    bool is_same(vector<int> v2) {
        if (v2.size() != v.size()) return false;
        for (int i = 0; i < v2.size(); i++) {
            if (v2[i] != v[i]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    MyStack s1, s2;

    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        s1.push(val);
    }

    cin >> size;
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        s2.push(val);
    }

    bool result = s1.is_same(s2.v);
    if (result) {
        cout << "YES";

    } else {
        cout << "NO";
    } 

    return 0;
}