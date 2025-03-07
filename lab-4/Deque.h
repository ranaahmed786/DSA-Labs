#pragma once
//Thia file contains the solution for exercise 4.2 and 4.3
#include <iostream>
using namespace std;
template<class T>
class DeQue {
	int front;
	int rear;
	int count;
	T* items;
	int size;
public:
	DeQue(int s = 200) {
		front = -1;
		rear = -1;
		count = 0;
		size = s;
		items = new T[size];
	}
	~DeQue() {
		delete[]items;
	}
	bool isFull() {
		return(count == size);
	}
	bool isEmpty() {
		return(count == 0);
	}
	int Count() {
		return count;
	}
	T Front() {
		if (isEmpty())
		{
			cout << "DeQue is empty\n";
			return T();
		}
		else return items[front];
	}
	T Rear() {
		if (isEmpty())
		{
			cout << "DeQue is empty\n";
			return T();
		}
		else return items[rear];
	}
	void insertFront(const T& item) {
		if (isFull()) cout << "DeQue overflow\n";
		else {
			if (front == -1) {
				front = 0;
				rear = 0;
			}
			else if (front == 0) front = size - 1;
			else front -= 1;
			items[front] = item;
			count++;
		}

	}
	void insertRear(const T& item) {
		if (isFull())cout << "Queue overlow\n";
		else {
			if (rear == -1) {
				front = 0;
				rear = 0;
			}
			else if (rear == size - 1) rear = 0;
			else rear += 1;
			items[rear] = item;
			count++;
		}
	}
	void deleteFront() {
		if (isEmpty()) cout << "DeQue underflow\n";
		else {
			cout << items[front] << " deleted from front" << endl;
			if (front == rear) {
				front = -1;
				rear = -1;
			}
			else if (front == size - 1) front = 0;
			else front += 1;
			--count;
		}
	}
	void deleteRear() {
		if (isEmpty()) cout << "DeQue underflow\n";
		else {
			cout << items[rear] << " deleted from rear" << endl;
			if (rear == front) {
				rear = -1;
				front = -1;
			}
			else if (rear == 0) rear = size - 1;
			else rear -= 1;
			--count;
		}

	}

};