#include <iostream>

using namespace std;

class NodeS {
   public:
    NodeS* prev;
    NodeS* next;
    int val;

    NodeS(int val) {
        prev = NULL;
        next = NULL;
        this->val = val;
    }
};

class d_list_stack {

   private:
    NodeS* head;
    NodeS* tail;
    int sz;

   public:
    d_list_stack() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push(int val) {
        NodeS* newNode = new NodeS(val);
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
        NodeS* deletedNode = tail;
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

class Node {
   public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class QueueDoublyLinkedList {
   private:
    Node* head;
    Node* tail;
    int size;

   public:
    QueueDoublyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void create() {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            push(val);
        }
    }

    void print() {
        while (!empty()) {
            cout << front() << " ";
            pop();
        }
    }

    void push(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            size++;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
        size++;
    }

    void pop() {
        size--;
        Node* deletedNode = head;
        head = head->next;
        
        if (head == NULL) {
            tail = NULL;
            delete deletedNode;
            return;
        }

        head->prev = NULL;
        delete deletedNode;
    }

    int front() { return head->val; }

    bool empty() {
        if (size == 0) {
            return true;
        } else {
            return false;
        }
    }
};


int main() { 
    d_list_stack s;
    QueueDoublyLinkedList q;
    int n, m;
    cin >> n >> m;

    int sizeS = n; 
    int sizeQ = m;

    while (n--) {
        int val;
        cin >> val;
        s.push(val);
    }

    while (m--) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (sizeS != sizeQ) {
        cout << "NO";
        return 0;
    }
    
    while (!s.empty()) {
        if (s.top() != q.front()) {
            cout << "NO";
            return 0;
        }

        s.pop();
        q.pop();
    }

    cout << "YES";


    return 0;
 }