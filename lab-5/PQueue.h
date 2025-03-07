#pragma once
#pragma once
#include <iostream>
#include"Queue.h"
using namespace std;
template <class T>
class PQue {
	Queue<T>* level;
	int priorLevels;
public:
	PQue(int s = 10) {
		priorLevels = s;
		level = new Queue<T>[priorLevels];
	}
	~PQue() {
		delete[] level;
	}
	bool isFull() const {
		for (int i = 0; i < priorLevels; i++)
		{
			if (!level[i].isFull())
			{
				return false;
			}
		}
		return true;
	}
	bool isEmpty() const {
		for (int i = 0; i < priorLevels; i++)
		{
			if (!level[i].isEmpty())
			{
				return false;
			}
		}
		return true;
	}
	void Insert(const T& x, int priority) {
		if (priority >= 0 && priority < priorLevels)
		{
			if (level[priority].isFull())
			{
				cout << "Priority Queue is full for Priority level" << priority << endl;
			}
			else {
				level[priority].Insert(x);
			}
		}
		else cout << "Invalid priority level\n";
	}
	void Delete(T& oldObj) {
		if (isEmpty()) {
			cout << "Priority Queue is empty " << endl;
		}
		else {
			for (int i = 0; i < priorLevels; i++)
			{
				if (!level[i].isEmpty())
				{
					level[i].Delete(oldObj);
					return;
				}
			}
		}
	}
	T Front() const {
		if (isEmpty())
		{
			cout << "Priority Queue is empty\n";
			return T();
		}
		else {
			for (int i = 0; i < priorLevels; i++)
			{
				if (!level[i].isEmpty())
				{
					return level[i].Front();
				}
			}
		}
		return T();
	}
	T Rear() const {
		if (isEmpty())
		{
			cout << "Priorty Queue is empty\n";
			return T();
		}
		else {
			for (int i = priorLevels - 1; i >= 0; i--)
			{
				if (!level[i].isEmpty())
				{
					return level[i].Rear();
				}
			}
			return T();
		}
	}
	int Count() const {
		int count = 0;
		for (int i = 0; i < priorLevels; i++)
		{
			count += level[i].Count();
		}
		return count;
	}
};