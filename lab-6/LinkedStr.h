#pragma once
#ifndef LINKEDSTR_H
#define LINKEDSTR_H

#include <iostream>
using namespace std;
struct Node {
    int info;
    Node* next;
};

class LinkedStr {
private:
    Node* ptr; // Head pointer
public:
    LinkedStr();    // Constructor
    ~LinkedStr();   // Destructor

    void makeStr(int len); // Create linked structure
    void displayStr();     // Display elements
    void removeFirst();    // Remove first node
    void removeLast();     // Remove last node
    void remove(int k);    // Remove node with value k
};
#endif
