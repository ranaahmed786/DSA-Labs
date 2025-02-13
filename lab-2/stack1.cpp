#include"stack1.h"
#include <iostream>
using namespace std;
template<class T>
Stack<T>::Stack(int stackSize) {
    top = -1;
    stacksize = stackSize;
    arr = new T[stacksize];
}

template<class T>
Stack<T>::~Stack() {
	delete[] arr;
}
template <class T>
bool Stack<T>::isEmpty() {
	return (top == -1);
}
template <class T>
bool Stack<T>::isFull() {
	return (top == stacksize - 1);
}
template <class T>
void Stack<T>::push(T value) {
	if (isFull()) {
		cerr << "Stack overflow" << endl;
	}
	else {
		arr[++top] = value;
	}
}
template <class T>
T Stack<T>::pop() {
	if (isEmpty()) {
		cerr << "Stack underflow" << endl;
	}
	else {
		top--;
	}
}
template <class T>
T Stack<T>::Top() {
	if (isEmpty()) {
		cerr << "Stack is empty" << endl;
	}
	else {
		return arr[top];
	}
}
template <class T>
T Stack<T>::Peek(int index) {
	if (!isEmpty() && index <= top) {
		return arr[index];
	}
	else {
		cerr << "Invalid index" << endl;
	}
}
template <class T>
int Stack<T>::Count() {
	return top + 1;
}