# README.md

## Project Overview

This project contains implementations of stack data structures and various algorithms using stacks. The project is divided into multiple files, each serving a specific purpose. Below is a description of each file and its contents.

### Files and Descriptions

#### Stack.h
This header file defines a stack class using a fixed-size array. The stack is designed to store items of type `ItemType` (defined as `char`). The class provides methods to:
- Check if the stack is empty (`isEmpty`)
- Check if the stack is full (`isFull`)
- Push an item onto the stack (`push`)
- Pop an item from the stack (`pop`)
- Peek at the top item of the stack without removing it (`peek`)

#### stack1.h
This header file defines a template-based stack class, allowing the stack to store items of any data type. The class provides methods to:
- Check if the stack is empty (`isEmpty`)
- Check if the stack is full (`isFull`)
- Push an item onto the stack (`push`)
- Pop an item from the stack (`pop`)
- Get the top item of the stack (`Top`)
- Peek at an item at a specific index (`Peek`)
- Count the number of items in the stack (`Count`)

#### Stack.cpp
This source file implements the methods defined in `Stack.h`. It includes the following functionalities:
- Constructor to initialize the stack
- Methods to check if the stack is empty or full
- Methods to push and pop items
- Method to peek at the top item

#### stack1.cpp
This source file implements the template-based stack class defined in `stack1.h`. It includes the following functionalities:
- Constructor to initialize the stack with a specified size
- Destructor to clean up dynamically allocated memory
- Methods to check if the stack is empty or full
- Methods to push and pop items
- Method to get the top item
- Method to peek at an item at a specific index
- Method to count the number of items in the stack

#### Source.cpp
This source file contains various algorithms that utilize the stack data structures defined in `Stack.h` and `stack1.h`. The algorithms include:
- Reversing a string using a stack
- Checking if a fully parenthesized expression is balanced
- Converting an infix expression to a postfix expression
- Evaluating a postfix expression

### How to Use

1. **Reversing a String**: The `ReverseStr` function takes a string and reverses it using a stack.
2. **Checking Balanced Parentheses**: The `isBalanced` function checks if a given expression has balanced parentheses.
3. **Infix to Postfix Conversion**: The `infixToPostfix` function converts an infix expression to a postfix expression.
4. **Evaluating Postfix Expression**: The `evaluatePostfix` function evaluates a given postfix expression.

### Compilation and Execution

To compile and run the project, use the following commands in your terminal:

cd c