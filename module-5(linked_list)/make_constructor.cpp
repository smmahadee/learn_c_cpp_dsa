#include <iostream>

using namespace std;

class Node {
   public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

int main() {
    Node a(10);
    Node b(20);

    a.next = &b;

    cout << a.next->val << endl;

    return 0;
}