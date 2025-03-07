#pragma once
// circular template implementation of Queue
#include <iostream>
using namespace std;
template<class T>
class Que {
	int size;
	T* items;
	int front;
	int rear;
	int count;
public:
	Que(int QueSize = 500) {
		size = QueSize;
		items = new T[size];
		rear = 0;
		front = 0;
		count= 0;
	}
	~Que() {
		delete[] items;
	}
	bool isFull() {
		return (count==size);
	}
	bool isEmpty() {
		return (count==0);
	}
	void Insert(const T &x) {
		if (isFull()) {
			cout << "Queue overflow" << endl;
		}
		else {
			items[rear] = x;
			rear = (rear + 1) % size;
			count++;
		}
	}
	void Delete(T& oldObj) {
		if (isEmpty()) {
			cout << "Queue underflow" << endl;
		}
		else {
			oldObj = items[front];
			front = (front + 1) % size;
			count--;
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
	T Rear() {
		if (isEmpty()) {
			cout << "Queue is empty" << endl;
			return 0;
		}
		else {
			return items[rear];
		}
	}
	int Count() {
		return (count);
	}
};