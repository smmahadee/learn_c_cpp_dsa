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

void insert(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = head;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void display_node(Node *head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void remove_duplicate(Node *head) {
    for (Node *i = head; i != NULL && i->next != NULL; i = i->next) {
        for (Node *j = i; j->next != NULL;) {
            if (i->val == j->next->val) {
                Node *deletedNode = j->next;
                j->next = j->next->next;
                delete deletedNode;

            } else {
                j = j->next;
            }
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert(head, tail, val);
    }

    remove_duplicate(head);
    display_node(head);

    return 0;
}