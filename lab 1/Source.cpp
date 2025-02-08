//Example 1.1
//int max1(int X, int Y) {
//	return X > Y ? X : Y;
//}
//void max2(int X, int Y, int &longer) {
//	longer = X > Y ? X : Y;
//}
//void max3(int X, int Y, int *longer) {
//	*Larger = X > Y ? X : Y;
//}
// Example 1.2
//#include<iostream>
//#include<math.h>
//using namespace std;
//class complex {
//private:
//	float re;
//	float im;
//public:
//	complex() {
//		re = 0, im = 0;
//	}
//	complex(float r, float i) {
//		re = r;
//		im = i;
//	}
//	complex(float r) {
//		re = r;
//		im = 0.0;
//	}
//	~complex() {};
//	complex mul(complex c1) {
//		complex temp;
//		temp.re = re * c1.re - im * c1.im;
//		temp.im = re * c1.im + im * c1.re;
//		return temp;
//	}
//	complex operator*(complex c1) { //overloading the * operator for complex numbers EXERCISE 1.1
//		mul(c1);
//	}
//	void display() {
//		cout << re << endl << im;
//	}
//};
//int main() {
//	complex c1(2,4), c2(2,1), result;
//	result=c1.mul(c2);
//	result.display();
//}
// Example 1.3
//#include<iostream>
//using namespace std;
//template<class T>
//T GetMax(T a, T b)
//{
//	T result;
//	result = (a > b) ? a : b;
//	return(result);
//}
//int main(){
//	int i = 5, j = 6, k;
//	long l = 10, m = 5, n;
//	k = GetMax<int>(i,j);
//	l = GetMax<long>(l, m);
//	cout << l << endl << n;
//	return 0;
//}
// Example 1.4
//#include<iostream>
//using namespace std;
//template <class T>
//class mypair {
//	Ta, b;
//public:
//	mypair(T first, T second) {
//		a = first;
//		b = second;
//	}
//	T getmin();
//};
//template<class T>
//T mypair<T>::getMin() { //EXERCISE 1.2 adding a function for minimum value of A PAIR 
//	T retval;
//	retval = a < b ? a: b;
//	return retval;
//}
//int main() {
//	mypair<int> myobject(22, 43);
//	cout << myobject.getmin();
//	return 0;
//}
// Example 1.5
//#include<iostream>
//using namespace std;
//template< class T, int N>
//class mySequence {
//	T memblock[N];
//public:
//	void setmem(int x, T value);
//	T getmem(int x);
//	T getmax();
//	T getmin();
// };
//template< class T, int N>
//void mySequence<T, N>::setmem(int x, T value) 
//{
//	memblock[x] = value;
//}
//template<class T, int N>
//T myseq<T, N>::getmem(int x)
//{
//	return memblock[x];
//
//} 
//template<class T, int N>
//T myseq<T, N>::getmin() {
//	T temp = memblock[0];
//	for (int i = 0; i < N; i++) { for getting minimum of the sequence EXERCISE 1.3
//		if (temp > memblock[i])
//			temp = memblock[i];
//	}
//	return temp;
//}
//template<class T, int N>
//T myseq<T, N>::getmax() { for getting maximum of the sequence EXERCISE 1.3
//	T temp = memblock[0];
//	for (int i = 0; i < N; i++) {
//		if (temp < memblock[i])
//			temp = memblock[i];
//	}
//	return temp;
//}
//
//int main() {
//	myseq<int, 5>myints;
//	myints.setmem(0, 1);
//	myints.setmem(1, 10);
//	myints.setmem(2, 600);
//	myints.setmem(3, 500);
//	myints.setmem(4, 100);
//	cout << myints.getmin() << endl;
//	cout << myints.getmax() << endl;
//	return 0;
//}
//Example 1.6
//#include<iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main(void) {
//	ofstream outFile("fout.txt");
//	ifstream inFile("fin.txt");
//	string word, line;
//	int wordCount = 0, lineCount = 0,charCount=0;
//	while (inFile >> word) {
//		wordCount++; for counting words in the file EXERCISE 1.4
//		for ( char c:word ) for counting characters in the file EXERCISE 1.4
//		{
//			charCount++;
//		}
//	}
//	while (getline(inFile, line)) {
//		lineCount++; for counting lines in the file EXERCISE 1.4
//	}
//	outFile << "The number of characters in the file is: " << charCount<<endl;
//	outFile << "The number of words in the file is: " << wordCount<<endl;
//	outFile << "The number of lines in the file is: " << lineCount;
//	inFile.close();
//	outFile.close();
//	return 0;
//}
//Exercise 1.5
//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//class House {
//public:
//    string owner;
//    string address;
//    int bedrooms;
//    float price;
//
//    // Function to input house details
//    void inputHouse() {
//        cout << "Enter Owner: ";
//        getline(cin, owner);
//        if (owner.length() > 20) owner = owner.substr(0, 20);
//        cout << "Enter Address: ";
//        getline(cin, address);
//        if (address.length() > 25) address = address.substr(0, 20);
//        cout << "Number of Bedrooms ?: ";
//        cin >> bedrooms;
//        cout << "Price: ";
//        cin >> price;
//        cin.ignore(); 
//    }
//
//    // Function to display house details
//    void displayHouse() const {
//        cout << left << setw(15) << owner
//            << setw(20) << address
//            << setw(10) << bedrooms
//            << price << endl;
//    }
//};
//
//int main() {
//    House available[100]; 
//    int count = 0;
//    char choice;
//
//    do {
//        if (count >= 100) {
//            cout << "Maximum limit of house entries reached!" << endl;
//            break;
//        }
//
//        available[count].inputHouse();
//        count++;
//
//        cout << "\nEnter another house? (Y/N): ";
//        cin >> choice;
//        cin.ignore(); 
//    } while (choice == 'Y' || choice == 'y');
//
//    // Display entered data
//    cout << left << setw(15) << "Owner"
//        << setw(20) << "Address"
//        << setw(10) << "Bedrooms"
//        << "Price" << endl;
//    cout << string(50, '-') << endl;
//
//    for (int i = 0; i < count; i++) {
//        available[i].displayHouse();
//    }
//
//    return 0;
//}
//Exercise 1.6
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <sstream>
//#include <cstring>
//
//using namespace std;
//
//class Student {
//private:
//    char name[30];
//    int grades[10];
//    float average;
//
//public:
//    void readData(int numGrades,ifstream &file) {
//        string firstName, secondName,fullname;
//        average = 0;
//        if (file>>firstName>>secondName)
//        {
//            fullname = firstName +" " + secondName;
//            strncpy_s(name, fullname.c_str(), sizeof(name) - 1);
//            name[sizeof(name) - 1] = '\0';
//        }
//        for (int i = 0; i < numGrades; i++)
//        {
//            file >> grades[i];
//            average += (char)grades[i];
//        }
//        average /= numGrades;
//    }
//
//    void displayData() const {
//        cout << left << setw(20) << name
//            << setw(10) << fixed << setprecision(2) << average << endl;
//    }
//
//    float getAverage() const {
//        return average;
//    }
//
//    const char* getName() const {
//        return name;
//    }
//};
//
//int main() {
//    string filename;
//    cout << "Enter the filename: ";
//    cin >> filename;
//    ifstream file(filename);
//    if (!file) {
//        cout << "Error opening file!\n";
//        return 1;
//    }
//
//    int numStudents, numGrades;
//    file >> numStudents >> numGrades;
//    file.ignore(); 
//
//    Student students[100]; // Assuming max 100 students
//
//    // Read student data into array
//    string line;
//    for (int i = 0; i < numStudents; i++) {
//        students[i].readData(numGrades, file);
//    }
//
//    file.close();
//
//    // Display student data
//    cout << "\nStudent Grades Database:\n";
//    cout << left << setw(20) << "Name" << setw(10) << "Average" << endl;
//    cout << string(30, '-') << endl;
//
//    float totalAvg = 0, highestAvg = 0, lowestAvg = 100;
//
//    for (int i = 0; i < numStudents; i++) {
//        students[i].displayData();
//        float avg = students[i].getAverage();
//        totalAvg += avg;
//        if (avg > highestAvg) highestAvg = avg;
//        if (avg < lowestAvg) lowestAvg = avg;
//    }
//
//    // Compute class average
//    float classAverage = totalAvg / numStudents;
//    cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
//    cout << "Highest Average: " << highestAvg << endl;
//    cout << "Lowest Average: " << lowestAvg << endl;
//
//    // List students below class average
//    cout << "\nStudents below class average:\n";
//    for (int i = 0; i < numStudents; i++) {
//        if (students[i].getAverage() < classAverage) {
//            cout << students[i].getName() << endl;
//        }
//    }
//
//    return 0;
//}
//Tou maine is lab ma kya seekha ha?
//debugging sekhai ha sir ny
//template class sekha ha
//file handling sekha ha
//class ka object banane ka tareeqa sekha ha
//pointers or reference seekha ha
//or stack heap wchar_t ka difference seekha ha
