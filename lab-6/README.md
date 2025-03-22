
# Linked List Implementation

## Introduction
This document provides an overview of a linked list implementation in C++. A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence. This implementation includes various member functions to manipulate the linked list, such as inserting, deleting, and traversing nodes.

## Concepts
- **Node**: The basic unit of a linked list, containing data and a pointer to the next node.
- **Head**: A pointer to the first node in the linked list.
- **Pointer**: A variable that stores the memory address of another variable, used to link nodes in the list.

## Member Functions

### Destructor
The destructor ensures that all dynamically allocated memory is freed when the linked list object is destroyed. It traverses the list and deletes each node.

### `isEmpty()`
This function checks if the linked list is empty by verifying if the head pointer is `nullptr`.

### `push(T x)`
This function inserts a new node with the value `x` at the front of the linked list. It creates a new node, sets its `info` to `x`, and adjusts the pointers accordingly.

### `pop()`
This function removes and returns the value of the node at the front of the linked list. If the list is empty, it prints an error message and returns a default value of type `T`.

### `insert(const T& value)`
This function inserts a new node with the specified value at the end of the linked list. It traverses the list to find the last node and appends the new node.

### `insertAfter(const T& after, const T& value)`
This function inserts a new node with the specified value after a node containing the value `after`. It traverses the list to find the target node and inserts the new node after it.

### `remove(const T& value)`
This function removes the first node in the linked list that contains the specified value. It adjusts the pointers to maintain the list structure after deletion.

## Driver Program
The driver program demonstrates the usage of the linked list implementation through a menu-driven interface. It allows the user to perform various operations on a `DeQue` object, such as inserting and deleting items from the front and rear, displaying items, and counting the total number of items.

### Menu Options
1. **Insert at front**: Prompts the user to enter an item and inserts it at the front of the deque.
2. **Insert at rear**: Prompts the user to enter an item and inserts it at the rear of the deque.
3. **Delete from front**: Removes the item from the front of the deque.
4. **Delete from rear**: Removes the item from the rear of the deque.
5. **Display front**: Displays the item at the front of the deque.
6. **Display rear**: Displays the item at the rear of the deque.
7. **Display count**: Displays the total number of items in the deque.
8. **Exit**: Exits the program.

The program continues to prompt the user for input until the exit option is selected.