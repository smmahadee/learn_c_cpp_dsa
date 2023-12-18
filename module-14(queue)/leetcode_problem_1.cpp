#include <iostream>
#include <queue>

using namespace std;

class MyStack {
   public:
    queue<int> q;

    MyStack() {}

    void push(int x) { q.push(x); }

    int pop() {
        queue<int> newQ;
        while (q.size() > 1) {
            int x = q.front();
            q.pop();
            newQ.push(x);
        }

        int val = q.front();
        q = newQ;

        return val;
    }

    int top() {
        queue<int> newQ;
        while (q.size() > 1) {
            int x = q.front();
            q.pop();
            newQ.push(x);
        }

        int val = q.front();
        q = newQ;

        return val;
    }

    bool empty() { return q.empty(); }
};

int main() {
    MyStack *s = new MyStack();
    s->push(10);
    s->push(20);
    s->push(30);
    s->pop();
    s->pop();
    cout << s->top()<<" ";
    return 0;
}