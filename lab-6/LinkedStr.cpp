#include "LinkedStr.h"

// Constructor: Initializes ptr to NULL
LinkedStr::LinkedStr() {
    ptr = nullptr;
}

// Destructor: Deletes all nodes
LinkedStr::~LinkedStr() {
    Node* temp;
    while (ptr != nullptr) {
        temp = ptr;
        ptr = ptr->next;
        delete temp;
    }
}

// Create linked list of given length
void LinkedStr::makeStr(int len) {
    if (len <= 0) return;

    cout << "Enter " << len << " values:\n";
    for (int i = 0; i < len; i++) {
        int value;
        cin >> value;
        Node* newNode = new Node{ value, nullptr };

        if (!ptr) { // If list is empty
            ptr = newNode;
        }
        else {
            Node* temp = ptr;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
}

// Display all elements
void LinkedStr::displayStr() {
    Node* temp = ptr;
    if (!temp) {
        cout << "List is empty\n";
        return;
    }
    cout << "Linked List: ";
    while (temp) {
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Remove first node
void LinkedStr::removeFirst() {
    if (!ptr) return;
    Node* temp = ptr;
    ptr = ptr->next;
    delete temp;
}

// Remove last node
void LinkedStr::removeLast() {
    if (!ptr) return;

    if (!ptr->next) { // If only one node exists
        delete ptr;
        ptr = nullptr;
        return;
    }

    Node* temp = ptr;
    while (temp->next->next) temp = temp->next;

    delete temp->next;
    temp->next = nullptr;
}

// Remove node with value k
void LinkedStr::remove(int k) {
    if (!ptr) return;

    if (ptr->info == k) { // If head is the target
        Node* temp = ptr;
        ptr = ptr->next;
        delete temp;
        return;
    }

    Node* temp = ptr;
    while (temp->next && temp->next->info != k) temp = temp->next;

    if (temp->next) { // Found k
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}
