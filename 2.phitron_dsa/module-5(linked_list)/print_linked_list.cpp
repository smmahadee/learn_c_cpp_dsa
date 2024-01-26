#include <iostream>

using namespace std;

class Node {
   public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

int main() {
    // Node* head = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(40);
    // Node* e = new Node(50);

    // head->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    
    // Node * temp = head;
    // while (temp != NULL) {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }

    // if(temp == NULL) {
    //     cout<<" YES";
    // }
Node* node = new Node(5);
cout << node->val << endl;
    return 0;
}