#include"PQueue.h"
#include<iostream>
using namespace std;
int main() {
	//write a menu for the testing of priority queue class
	PQue<int> pq;
	int choice;
	int priority;
	int data;
	int oldObj;
	do {
		cout << "1. Insert\n";
		cout << "2. Delete\n";
		cout << "3. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter data: ";
			cin >> data;
			cout << "Enter priority: ";
			cin >> priority;
			pq.Insert(data, priority);
			break;
		case 2:
			pq.Delete(oldObj);
			cout << "Deleted data: " << oldObj << endl;
			break;
		case 3:
			break;
		default:
			cout << "Invalid choice\n";
		}
	} while (choice != 3);