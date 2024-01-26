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

    cout << endl;
}

int count(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }

    // cout << endl << count;

    return count;
}

void duplicate_value_check(Node* head) {
    if (head == NULL || head->next == NULL) {
        cout << "No value exist in list." << endl;
        return;
    }

    int freqArr[100] = {0};

    while (head != NULL) {
        freqArr[head->val]++;
        head = head->next;
    }

    cout << endl << "Your duplicate values are: ";

    for (int i = 0; i < 100; i++) {
        if (freqArr[i] > 1) {
            cout << i << " ";
        }
    }

    cout << endl;
}

void printMiddleElement(Node* head) {
    int totalCount = count(head);
    if (totalCount < 2) {
        cout << "low elements" << endl;
        return;
    }

    int middleIndex = totalCount % 2 != 0 ? totalCount / 2 + 1 : totalCount / 2;

    Node* temp = head;

    if (totalCount % 2 != 0) {
        for (int i = 1; i < middleIndex; i++) {
            temp = temp->next;
        }
        cout << "value is: " << temp->val << endl;
    } else {
        for (int i = 1; i < middleIndex; i++) {
            temp = temp->next;
        }
        cout << "value is: " << temp->val << " " << temp->next->val << endl;
    }
}

void insert_node(Node*& head, int pos, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;

        if (temp == NULL) {
            cout << endl << "Invalid position" << endl;
            return;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void is_sorted(Node* head) {
    bool flag = true;

    while (head->next != NULL) {
        if (head->val > head->next->val) {
            flag = false;
            break;
        }

        head = head->next;
    }

    if (flag) {
        cout << "It is sorted" << endl;
    } else {
        cout << "It is not sorted" << endl;
    }
}

int main() {
    Node* head = NULL;
    cout << "Enter -1 if you want to exit: ";

    // Create linked list
    while (true) {
        int input;
        cin >> input;

        if (input == -1) break;

        create_node(head, input);
    }

    // query in linked list

    // cout << "Enter number of query: ";
    // int query;
    // cin >> query;

    // while (query--) {
    //     int pos, val;
    //     cout << "Enter a position: ";
    //     cin >> pos;
    //     cout << "Enter a value: ";
    //     cin >> val;

    //     insert_node(head, pos, val);
    //     display_node(head);
    // }

    // Display list
    // display_node(head);

    // display list size
    // int totalCount =  count(head);

    // check if there any duplicate value
    // duplicate_value_check(head);

    // print middle element
    // printMiddleElement(head);

    is_sorted(head);

    return 0;
}