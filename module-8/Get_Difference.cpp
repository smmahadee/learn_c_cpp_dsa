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

int find_max(Node *head) {
    int max = INT_MIN;

    while (head != NULL) {
        if (max < head->val) max = head->val;

        head = head->next;
    }

    return max;
}

int find_min(Node *head) {
    int min = INT_MAX;

    while (head != NULL) {
        if (min > head->val) min = head->val;

        head = head->next;
    }

    return min;
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

    int max_val = find_max(head);
    int min_val = find_min(head);

    cout << max_val - min_val;

    return 0;
}