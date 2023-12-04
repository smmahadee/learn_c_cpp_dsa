#include <iostream>

using namespace std;

void invalid_index(string msg = "Invalid index position.") {
    cout << endl << msg << endl;
    return;
}

class Node {
   public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        cout << endl << "Inserted at head" << endl;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    cout << endl << "Inserted at tail" << endl;
}

void print_node(Node *head) {
    cout << "Your linked list are: ";
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insert_at_any_position(Node *head, int pos, int val) {
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;

        if (temp == NULL) {
            invalid_index();
            return;
        }
    }

    if (temp->next == NULL) return invalid_index();

    newNode->next = temp->next;
    temp->next = newNode;

    cout << endl
         << val << " "
         << "inserted." << endl;
}

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;

    cout << endl << "Inserted at head" << endl;
}

void delete_a_node(Node *head, int pos) {
    Node *temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;

        if (temp == NULL) {
            invalid_index();
            return;
        };
    }

    if (temp->next == NULL) return invalid_index();
    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;

    cout << endl << pos << " number position deleter" << endl;
}

void delete_head(Node *&head) {
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;

    cout << endl << "Head deleted successfully." << endl;
}

int main() {
    Node *head = NULL;

    while (true) {
        cout << endl << "1. Create a node." << endl;

        cout << "2. Print your node list." << endl;
        cout << "3. Insert at any position." << endl;
        cout << "4. Insert at head." << endl;
        cout << "5. Delete a node." << endl;
        cout << "6. Delete head." << endl;
        cout << "7. Create some node." << endl;
        cout << "8. Break program." << endl << endl;
        cout << "Enter your option: ";
        int op;
        cin >> op;

        // if (op > 3) break;

        if (op == 1) {
            cout << "Insert a value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        } else if (op == 2) {
            print_node(head);
        } else if (op == 3) {
            int pos, val;
            cout << "Insert your position: ";
            cin >> pos;
            cout << "Insert your value: ";
            cin >> val;

            if (pos == 0) {
                insert_at_head(head, val);
            } else {
                insert_at_any_position(head, pos, val);
            }

        } else if (op == 4) {
            int val;
            cout << "Insert your value: ";
            cin >> val;

            insert_at_head(head, val);
        } else if (op == 5) {
            int pos;
            cout << "Insert a position: ";
            cin >> pos;

            if (pos == 0) {
                delete_head(head);
            } else {
                delete_a_node(head, pos);
            }

        } else if (op == 6) {
            delete_head(head);
        } else if (op == 7) {
            while (true) {
                int val;
                cout << "Enter -1 when want to exit: ";
                cin >> val;
                if (val == -1) break;

                insert_at_tail(head, val);
            }
        } else if (op == 8) {
            break;
        }
    }

    // Node *head = new Node(10);

    // insert_at_tail(head, 20);
    // insert_at_tail(head, 30);

    // print_node(head);

    return 0;
}