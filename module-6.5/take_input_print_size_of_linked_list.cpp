#include <iostream>

using namespace std;

class Node {
   public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void create_node(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display_node(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

void count(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }

    cout << endl << count;
}

int main() {
    Node* head = NULL;
    cout << "Enter -1 if you want to exit: ";

    while (true) {
        int input;
        cin >> input;

        if (input == -1) break;

        create_node(head, input);
    }

    display_node(head);
    count(head);

    return 0;
}