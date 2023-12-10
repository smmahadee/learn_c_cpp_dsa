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

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void delete_node(Node *&head, int pos) {
    if (pos < 0 || pos >= count(head)) return;

    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;

        delete deleteNode;
        return;
    }

    Node *p = head;

    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }

    Node *deleteNode = p->next;
    p->next = p->next->next;
    delete deleteNode;
}

int main() {
    Node *head = NULL;

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int op, val;
        cin >> op >> val;

        if (op == 0) {
            insert_at_head(head, val);
        } else if (op == 1) {
            insert_at_tail(head, val);
        } else {
            delete_node(head, val);
        }

        display_node(head);
        cout << endl;
    }

    return 0;
}