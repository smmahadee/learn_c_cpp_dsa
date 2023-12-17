#include <iostream>

using namespace std;

class Node {
   public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_list(Node* head) {
    cout<<"L -> ";
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout <<endl;
}

void print_list_reverse(Node* tail) {
     cout<<"R -> ";
    while (tail != NULL) {
        cout << tail->val << " ";
        tail = tail->prev;
    }

    cout << endl;
}

int total_size(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }

    return len;
}

void insert_at_any_position(Node*& head, int pos, int val) {
    Node* newNode = new Node(val);

    Node* p = head;
    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }

    newNode->prev = p;
    newNode->next = p->next;
    p->next->prev = newNode;
    p->next = newNode;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (tail == NULL) {
        tail = newNode;
        head = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int query;
    cin >> query;

    while (query--) {
        int pos, val;
        cin >> pos >> val;

        if (pos == 0) {
            insert_at_head(head, tail, val);
        } else if (pos == total_size(head)) {
            insert_at_tail(head, tail, val);
        } else if (pos > 0 && pos < total_size(head)) {
            insert_at_any_position(head, pos, val);

        } else {
            cout << "Invalid"<<endl;
            continue;
        }

        print_list(head);
        print_list_reverse(tail);
    }

    return 0;
}