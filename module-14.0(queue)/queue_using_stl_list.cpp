#include <iostream>
#include <list>

using namespace std;

class MyQueue {
   private:
    list<int> l;

   public:
    void push(int val) { l.push_back(val); }

    void pop() { l.pop_front(); }

    int top() { return l.front(); }

    int size() { return l.size(); }

    bool isEmpty() { return l.empty(); }
};

int main() {
    MyQueue s;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    while (s.isEmpty() == false) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}