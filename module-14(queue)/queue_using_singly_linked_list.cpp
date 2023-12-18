#include <iostream>

using namespace std;

// stack using singly linked list

class Node {
   public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class QueueSinglyLinkedList {
   private:
    Node* head;
    Node* tail;
    int size;

   public:

    QueueSinglyLinkedList() {
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

        tail->next = newNode;
        tail = tail->next;
        size++;
    }

    void pop() {
        Node* deletedNode = head;
        head = head->next;
        delete deletedNode;
        size--;
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
    QueueSinglyLinkedList s;
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