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

long long int search_and_find_index(Node *head, long long int el) {
    long long int index = 0;

    while (head != NULL) {
        if (head->val == el) return index;

        index++;
        head = head->next;
    }

    return -1;
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true) {
            cin >> val;
            if (val == -1) break;
            insert(head, tail, val);
        }
        long long int el;
        cin >> el;
        long long int index = search_and_find_index(head, el);
        cout << index << endl;
    }

    return 0;
}