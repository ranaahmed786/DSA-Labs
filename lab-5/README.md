# Lab Task: Priority Queue Implementation

## Overview
In this lab task, we implemented a priority queue using C++ templates. The priority queue is built on top of a basic queue class. The priority queue allows elements to be inserted with a specified priority, and elements are dequeued based on their priority level.

---

## Files

### `Queue.h`
This file contains the implementation of a basic queue class template.

#### Core Concepts
- **Template Class**: The `Queue` class is a template class, allowing it to handle different data types.
- **Dynamic Array**: The queue uses a dynamic array to store elements.
- **Circular Queue**: The queue is implemented as a circular queue to efficiently use the allocated space.

#### Key Methods
- `isFull()`: Checks if the queue is full.
- `isEmpty()`: Checks if the queue is empty.
- `Insert(T x)`: Inserts an element into the queue.
- `Delete(T& oldObj)`: Deletes an element from the queue.
- `Front()`: Returns the front element of the queue.
- `Count()`: Returns the number of elements in the queue.

---

### `PQueue.h`
This file contains the implementation of a priority queue class template that uses the `Queue` class.

#### Core Concepts
- **Priority Levels**: The priority queue is composed of multiple queues, each representing a different priority level.
- **Template Class**: The `PQue` class is also a template class, allowing it to handle different data types.

#### Key Methods
- `isFull() const`: Checks if all priority levels are full.
- `isEmpty() const`: Checks if all priority levels are empty.
- `Insert(const T& x, int priority)`: Inserts an element into the queue with a specified priority.
- `Delete(T& oldObj)`: Deletes the highest priority element from the queue.
- `Front() const`: Returns the front element of the highest priority queue.
- `Rear() const`: Returns the rear element of the highest priority queue.
- `Count() const`: Returns the total number of elements in the priority queue.

---

### `Source.cpp`
This file contains the main function to test the priority queue class.

#### Core Concepts
- **Menu-Driven Program**: The program provides a menu to insert and delete elements from the priority queue.
- **User Input**: The program takes user input for data and priority levels.

#### Key Operations
- **Insert Operation**: Allows the user to insert an element with a specified priority.
- **Delete Operation**: Allows the user to delete the highest priority element from the queue.

---

## How to Run
1. Compile the program using a C++14 compatible compiler.
   ```bash
   g++ -std=c++14 Source.cpp -o PriorityQueue