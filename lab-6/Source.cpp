#include<iostream>
#include"Deque.h"
#include<fstream>
using namespace std;
int main() {
	ifstream file("input.txt");
	if (file)
	{

	}
	DeQue<string> dq(4);

	int choice;
	string item;
	do
	{
		cout << "1. Insert at front" << endl;
		cout << "2. Insert at rear" << endl;
		cout << "3. Delete from front" << endl;
		cout << "4. Delete from rear" << endl;
		cout << "5. Display front" << endl;
		cout << "6. Display rear" << endl;
		cout << "7. Display count" << endl;
		cout << "8. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter item to insert at front: ";
			cin >> item;
			dq.insertFront(item);
			break;
		case 2:
			cout << "Enter item to insert at rear: ";
			cin >> item;
			dq.insertRear(item);
			break;
		case 3:
			dq.deleteFront();
			break;
		case 4:
			dq.deleteRear();

			break;
		case 5:
			cout << "Front item is: " << dq.Front() << endl;
			break;
		case 6:
			cout << "Rear item is: " << dq.Rear() << endl;
			break;
		case 7:
			cout << "Total items in DeQue are: " << dq.Count() << endl;
			break;
		case 8:
			exit(0);
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}

	} while (!(choice == 8));
	return 0;
}
