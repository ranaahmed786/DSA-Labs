# Project Overview

This project contains solutions for exercises 4.1, 4.2, and 4.3. The solutions are implemented in C++ and demonstrate the use of queues and deques. The project consists of three main files:

- `Source.cpp`
- `Queue.h`
- `Deque.h`

## Source.cpp

This file contains the main function which demonstrates the use of the `Que` class from `Queue.h`. The program performs the following tasks:

1. Creates a queue of strings with a maximum size of 10.
2. Prompts the user to enter the names of four friends and inserts these names into the queue.
3. Deletes the names from the queue and prints them in the order they were inserted.

### Core Concepts

- **Queue Operations**: The program demonstrates basic queue operations such as insertion and deletion.
- **User Input**: The program takes user input and processes it.

## Queue.h

This file contains the implementation of a circular queue template class `Que`. The class supports the following operations:

- **Insert**: Adds an element to the rear of the queue.
- **Delete**: Removes an element from the front of the queue.
- **isFull**: Checks if the queue is full.
- **isEmpty**: Checks if the queue is empty.
- **Front**: Returns the front element of the queue.
- **Rear**: Returns the rear element of the queue.
- **Count**: Returns the number of elements in the queue.

### Core Concepts

- **Circular Queue**: The queue is implemented in a circular manner to efficiently use the allocated space.
- **Template Class**: The queue is implemented as a template class to support different data types.

## Deque.h

This file contains the implementation of a double-ended queue (deque) template class `DeQue`. The class supports the following operations:

- **insertFront**: Adds an element to the front of the deque.
- **insertRear**: Adds an element to the rear of the deque.
- **deleteFront**: Removes an element from the front of the deque.
- **deleteRear**: Removes an element from the rear of the deque.
- **isFull**: Checks if the deque is full.
- **isEmpty**: Checks if the deque is empty.
- **Front**: Returns the front element of the deque.
- **Rear**: Returns the rear element of the deque.
- **Count**: Returns the number of elements in the deque.

### Core Concepts

- **Double-Ended Queue**: The deque allows insertion and deletion of elements from both ends.
- **Template Class**: The deque is implemented as a template class to support different data types.

## How to Run

1. Compile the `Source.cpp` file using a C++ compiler that supports C++14.
2. Run the compiled executable.
3. Follow the prompts to enter the names of your friends.

## Conclusion

This lab demonstrates the implementation and usage of queues and deques in C++. The `Que` class provides a circular queue implementation, while the `DeQue` class provides a double-ended queue implementation. Both classes are implemented as templates to support various data types.