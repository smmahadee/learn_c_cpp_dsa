#include <iostream>

using namespace std;

// stack using doubly linked list

class Node {
   public:
    Node* prev;
    Node* next;
    int val;

    Node(int val) {
        prev = NULL;
        next = NULL;
        this->val = val;
    }
};

class d_list_stack {
    //    private:
   public:
    Node* head;
    Node* tail;
    int sz;

   public:
    d_list_stack() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }

        // tail->next = newNode;
        // newNode->prev = tail;
        // tail = tail->next;

        // newNode->next = tail->next;
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
        sz++;
    }

    void pop() {
        Node* deletedNode = tail;
        tail = tail->prev;
        delete deletedNode;
        sz--;
        if(tail == NULL) {
            head = NULL;
        }else {
            tail->next = NULL;
        }
    }

    int top() { return tail->val; }

    int size() { return sz; }

    bool empty() { return sz == 0 ? true : false; }
};

int main() {
    d_list_stack s;

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.pop();
    // cout << s.tail->prev->val;
    // cout<<s.tail->val;
    // cout<<s.top();
    // cout<<s.top()<<s.size();

    return 0;
}