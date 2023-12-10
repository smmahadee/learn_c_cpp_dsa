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
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

void print_list_reverse(Node* tail) {
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

void delete_node_by_position(Node* head, int pos) {
    for (int i = 0; i < pos - 1; i++) {
        head = head->next;
    }

    Node* deletedNode = head->next;
    head->next = head->next->next;
    head->next->prev = head;
    delete deletedNode;
}

void delete_tail(Node*& tail) {
    Node* deletedNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deletedNode;
}

void delete_head(Node*& head) {
    Node* deletedNode = head;
    head = head->next;
    head->prev = NULL;
    delete deletedNode;
}

int main() {
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* tail = b;

    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;

    Node *head = NULL;
    Node * tail = NULL;

    // for taking input untill -1
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;

        insert_at_tail(head, tail, val);
    }

    //  for deleting node
    /* int pos;
     cin >> pos ;
     if (pos == 0) {
         delete_head(head);
     } else if (pos == total_size(head) -1) {
         delete_tail(tail);
     } else if (pos > 0 && pos < total_size(head) - 1) {
         delete_node_by_position(head, pos);
     } else {
         cout << "invalid position";
     } */

    // for inserting value
    /* int pos, val;
    cin >> pos >> val;
    if (pos == 0) {
        insert_at_head(head, tail, val);
    } else if (pos == total_size(head)) {
        insert_at_tail(head, tail, val);
    } else if (pos > 0 && pos < total_size(head)) {
        insert_at_any_position(head, pos, val);

    } else {
        cout << "invalid position";
    } */

    cout<<endl;
    print_list(head);
    cout<<endl;
    print_list_reverse(tail);

    return 0;
}