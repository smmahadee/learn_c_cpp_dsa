#include <iostream>

using namespace std;

// stack using singly linked list

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
    QueueDoublyLinkedList s;
    // s.push(50);
    s.create();
    s.print();
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // // s.push(10);
    // // s.push(20);
    // // s.push(40);
    // s.pop();
    // s.pop();
    // cout << s.front();

    return 0;
}