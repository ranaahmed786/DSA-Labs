#pragma once
#include <iostream>
using namespace std;

template <class T>
class Stack {
    int top;
    T* arr;
    int stacksize;
public:
    Stack(int stackSize = 1);
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push(T value);
    T pop();
    int Count();
    T Top();
    T Peek(int index);
};
