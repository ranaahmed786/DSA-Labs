#include<iostream>
#include"Queue.h"
using namespace std;
int main() {
	//Exercise 4.1
	Que<string> names(10);
	string name;
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the name of your " << i + 1 << " friend";
		cin >> name;
		names.Insert(name);
	}
	string nameOld;
	for (int i = 0; i < 4; i++)
	{
		names.Delete(nameOld);
		cout<<"The first name was :"<<nameOld<<endl;
	}
	return 0;
}