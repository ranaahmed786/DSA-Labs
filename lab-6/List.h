#pragma once
#pragma once
#include <iostream>
using namespace std;
template <class T>
class List {
protected:
	struct Node {
		T info;
		Node* next;
	};
	typedef struct Node* nodePtr;
	NodePtr head;
public:
	List() {
		head = nullptr;
	}
	~List() {

		while (head != nullptr) {
			nodePtr temp = head;
			head = head->next;
			delete temp;
		}

	}
	bool isEmpty() const {
		return head == nullptr;
	}
	void push(T x) {
		nodePtr p = new Node;
		p->info = x;
		p->next = head;
		head = p;
	}
	T pop() {
		if (head == nullptr)
		{
			cout << "List is empty" << endl;
			return T();
		}
		else {
			nodePtr p = head;
			T x = p->info;
			head = p->next;
			delete p;
			return x;
		}
	}
	void insert(const T& value) {
		if (head == nullptr) push(value);
		else {
			nodePtr curr = head;
			while (curr->next != nullptr)
			{
				curr = curr->next;
			}
			nodePtr newNode = new Node;
			newNode->info = value;
			newNode->next = nullptr;
			curr->next = newNode;
			cout << value << " inserted" << endl;
		}
	}
	void insertAfter(const T& after, const T& value) {
		if (head == nullptr) cout << "List is empty cannot insert after :" << after << endl;
		else {
			nodePtr curr, prev;
			for (curr = head, prev = nullptr; curr != nullptr && curr->info != after; curr = curr->next, prev = curr) {}
			if (curr == nullptr) cout << "Cannot find " << after << " in the list" << endl;
			else {
				nodePtr newNode = new Node;
				newNode->next = curr->next;
				newNode->info = value;
				curr->next = newNode;
				cout << value << " inserted after " << after << endl;
			}
		}
	}
	void remove(const T& value) {
		if (head == nullptr) cout << "List is empty" << endl;
		else {
			for (curr = head, prev = nullptr; curr != nullptr && curr->info != value; curr = curr->next, prev = curr) {}
			if (curr == nullptr) cout << "Cannot find " << value << " in the list" << endl;
			else {
				if (prev == nullptr) {
					head = curr->next;
				}
				else {
					prev->next = curr->next;
				}
				delete curr;
				cout << value << " removed" << endl;
			}
		}
	}
};