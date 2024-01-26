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

bool is_palindrome(Node* head, Node* tail) {
    while (head != NULL && tail != NULL && head != tail) {
        if (head->val != tail->val) {
            return false;
        }

        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;

        insert_at_tail(head, tail, val);
    }

    // print_list(head);

    bool result = is_palindrome(head, tail);
    if(result == true) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }

    return 0;
}