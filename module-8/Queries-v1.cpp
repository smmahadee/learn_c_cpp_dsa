#include <limits.h>

#include <iostream>

using namespace std;

class Node {
   public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display_node(Node *head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int count(Node *head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }

    return len;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        tail = newNode;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_node(Node *&head, Node *&tail, int pos) {
    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;

        if(head->next == NULL) {
            tail = NULL;
        }
        delete deleteNode;
    } else {
        Node *p = head;
        Node *q = NULL;

        for (int i = 0; i < pos && p; i++) {
            q = p;
            p = p->next;
        }

        if (p != NULL) {
            Node *deleteNode = p;
            q->next = p->next;
            if (q->next == NULL) {
                tail = q;
            }
            delete deleteNode;
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int op, val;
        cin >> op >> val;

        if (op == 0) {
            insert_at_head(head, tail, val);
        } else if (op == 1) {
            insert_at_tail(head, tail, val);
        } else {
            delete_node(head, tail, val);
        }

        display_node(head);
        cout << endl;
    }

    return 0;
}