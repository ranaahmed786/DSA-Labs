#pragma once
#include<iostream>
using namespace std;
typedef char ItemType;
const int maxItems= 100;
class stack {
	int top = -1;
	ItemType items[maxItems];
public:
	stack();
	bool isEmpty();
	bool isFull();
	void pop( ItemType &newitem);
	void push(ItemType item);
	ItemType peek();
};
