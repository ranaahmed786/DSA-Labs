#include "Stack.h"
using namespace std;
stack::stack() {
	top = -1;
}
bool stack::isEmpty() {
	return top == -1;
}
bool stack::isFull() {
	return top == maxItems - 1;
}
void stack::pop(ItemType  &item) {
	if (isEmpty()) {
		cout << "Stack is empty" << endl;
	}
	else {
		item = items[top];
		top--;
	}
}
void stack::push(ItemType newitem) {
	if (isFull()) {
		cout << "Stack is full" << endl;
	}
	else {
		top++;
		items[top] = newitem;
	}
}
ItemType stack::peek() {
	if (isEmpty()) {
		cout << "Stack is empty" << endl;
		auto x = ItemType();
		return x;
	}
	else {
		return items[top];
	}
}

