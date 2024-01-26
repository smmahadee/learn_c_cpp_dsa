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

int count(Node *p) {
    int len = 0;
    while (p != NULL) {
        len++;
        p = p->next;
    }

    return len;
}

void is_same_to_same(Node *head, Node *head2) {
    if (count(head) != count(head2)) {
        cout << "NO";
        return;
    }

    int flag = 1;

    while (head != NULL || head2 != NULL) {
        if (head->val != head2->val) {
            flag = 0;
            break;
        }

        head = head->next;
        head2 = head2->next;
    }

    if (flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert(head, tail, val);
    }

    int val2;
    while (true) {
        cin >> val2;
        if (val2 == -1) break;
        insert(head2, tail2, val2);
    }

    is_same_to_same(head, head2);

    return 0;
}