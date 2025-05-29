#include<iostream>
#include"BST.h"
using namespace std;
#include<string>

int main() {
	BinarySearchTree<int> bst;


	bst.insertItem(10);
	bst.insertItem(5);
	bst.insertItem(15);
	bst.insertItem(3);
	bst.insertItem(7);

	cout << "In-order Traversal: ";
	bst.PrintTree();
	cout << endl;

	cout << "Total nodes: " << bst.NumberOfNodes() << endl;

	int item = 7;
	bool found = false;
	bst.RetrieveItem(item, found);
	cout << (found ? "Item found" : "Item not found") << endl;

	bst.DeleteItem(item);
	cout << "After deleting 7, in-order: ";
	bst.PrintTree();
	cout << endl;
	BinarySearchTree<char> BST;
	cout << "------------------------------------------------------" << endl;
	cout << "EXERCISE 9.1 " << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "Enter a string :";
	string str;
	getline(cin, str);
	for (char ch : str) {
		BST.insertItem(ch);
	}
	cout << "Sorted string: ";
	BST.PrintTree();
	cout << endl;
	return 0;
}