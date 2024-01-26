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

void display(Node *head) {
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

void create_list(Node *head) {}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    cout << "Enter first linked list element: ";
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert(head, tail, val);
    }

    cout << endl << "Enter second linked list element: ";
    int val2;
    while (true) {
        cin >> val2;
        if (val2 == -1) break;
        insert(head2, tail2, val2);
    }

    int totalEl1 = count(head);
    int totalEl2 = count(head2);

    if (totalEl1 == totalEl2) {
        cout << "True";
    } else {
        cout << "False";
    }

    // display(head2);

    return 0;
}