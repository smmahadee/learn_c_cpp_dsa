#include <iostream>
#include <sstream>

using namespace std;

class Node {
   public:
    string val;
    Node* prev;
    Node* next;

    Node(string val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, string val) {
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

void go_prev(Node*& queryHead) {
    if (queryHead->prev != NULL) {
        cout << queryHead->prev->val << endl;
        queryHead = queryHead->prev;
    } else {
        cout << "Not Available" << endl;
    }
}

void go_next(Node*& queryHead) {
    if (queryHead->next != NULL) {
        cout << queryHead->next->val << endl;
        queryHead = queryHead->next;
    } else {
        cout << "Not Available" << endl;
    }
}

void visit_address(Node*& queryHead, string value) {
    if (queryHead->val == value) {
        cout << value << endl;
        return;
    }

    Node* p = queryHead->next;

    while (p != NULL) {
        if (p->val == value) {
            cout << value << endl;
            queryHead = p;
            return;
        } else {
            p = p->next;
        }
    }

    p = queryHead->prev;

    while (p != NULL) {
        if (p->val == value) {
            cout << value << endl;
            queryHead = p;
            return;
        } else {
            p = p->prev;
        }
    }

    cout << "Not Available" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    while (true) {
        cin >> val;
        if (val == "end") break;

        insert_at_tail(head, tail, val);
    }

    Node* queryHead = head;

    int query;
    cin >> query;
    cin.ignore();

    while (query--) {
        string address;
        getline(cin, address);

        stringstream ss(address);
        string firstWord, lastWord;

        ss >> firstWord;

        if (ss >> lastWord) {
            visit_address(queryHead, lastWord);

        } else {
            if (firstWord == "prev") {
                go_prev(queryHead);
            } else {
                go_next(queryHead);
            }
        }
    }

    return 0;
}