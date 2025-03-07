#pragma once
#pragma once
#include <iostream>
using namespace std;
template<class T>
class Queue {
	int size;
	T* items;
	int front;
	int rear;
public:
	Que(int QueSize = 500) {
		size = QueSize;
		items = new T[size];
		rear = 0;
		front = 0;
	}
	~Que() {
		delete[] items;
	}
	bool isFull() {
		return ((rear + 1) % size == front);
	}
	bool isEmpty() {
		return (front == rear);
	}
	void Insert(T x) {
		if (isFull()) {
			cout << "Queue overflow" << endl;
		}
		else {
			items[rear] = x;
			rear = (rear + 1) % size;
		}
	}
	void Delete(T& oldObj) {
		if (isEmpty()) {
			cout << "Queue underflow" << endl;
		}
		else {
			oldObj = items[front];
			front = (front + 1) % size;
		}
	}
	T Front() {
		if (isEmpty()) {
			cout << "Queue is empty" << endl;
			return 0;
		}
		else {
			return items[front];
		}
	}
	int Count() {
		return (rear - front + size) % size;
	}
};