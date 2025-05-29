
////Example 12.1
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <conio.h>  
//using namespace std;
//
//int main()
//{
//    vector<int> v;
//
//    for (int i = 0; i < 25; i++)
//        v.push_back(i);
//
//    random_shuffle(v.begin(), v.end());
//
//    for (int j = 0; j < 25; j++)
//        cout << v[j] << " ";
//
//    cout << endl;
//
//   getch();  
//    return 0;
//}

//Example 12.2


//#include <list>
//#include <algorithm>
//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//    list<int> v;
//
//    for (int i = 0; i < 25; i++)
//        v.push_back(i);
//
//    for (int j = 0; j < 25; j++)
//    {
//        cout << v.front() << " ";
//        v.pop_front();
//    }
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.3

//#include <algorithm>
//#include <deque>
//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//    deque<int> v;
//
//    for (int i = 0; i < 25; i++)
//        v.push_back(i);
//
//    random_shuffle(v.begin(), v.end());
//
//    for (int j = 0; j < 25; j++)
//    {
//        cout << v.front() << " ";
//        v.pop_front();
//    }
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.4:
//#include <iostream>
//#include <stack>
//#include <list>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//    stack<int, list<int>> stk;
//
//    for (int i = 0; i < 10; i++)
//        stk.push(i);
//
//    while (!stk.empty())
//    {
//        cout << stk.top() << " ";
//        stk.pop();
//    }
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.5

//#include <iostream>
//#include <bitset>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//    bitset<16> b1("1011011110001011");
//    bitset<16> b2;
//
//    b2 = ~b1;
//
//    for (int i = b2.size() - 1; i >= 0; i--)
//        cout << b2[i];
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.6

//#include <algorithm>
//#include <vector>
//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//const int N = 100;
//
//int main()
//{
//    vector<int> iv(N);
//    iv[50] = 37;
//
//    vector<int>::iterator iter = find(iv.begin(), iv.end(), 37);
//
//    if (iter == iv.end())
//        cout << "not found n";
//    else
//        cout << "found at " << iter - iv.begin() << " in";
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.7         

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//    int set1[] = { 1, 2, 3 };
//    int set2[] = { 2, 3, 4 };
//    vector<int> set3(10);
//
//    vector<int>::iterator first = set3.begin();
//    vector<int>::iterator last =
//        set_union(set1, set1 + 3, set2, set2 + 3, first);
//
//    while (first != last)
//    {
//        cout << *first << " ";
//        first++;
//    }
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.8

//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//int vec1[20];
//int vec2[30];
//int main()
//{
//
//    fill(vec1, vec1 + 10, -1);
//    for (int i = 0; i < 10; i++)
//        cout << vec1[i] << " ";
//
//    cout << endl;
//    fill_n(vec2, 5, -1);
//    for (int j = 0; j < 30; j++)
//        cout << vec2[j] << " ";
//
//    cout << endl;
//    getch();
//    return 0;
//}

//Example 12.9

//#include <iostream>
//#include <numeric>
//#include <conio.h>
//
//using namespace std;
//int vec[] = { 1, 2, 3, 4, 5 };
//int main()
//{
//	
//	int sum = accumulate(vec, vec + 5, 0);
//	cout << sum << endl;
//
//	int prod = accumulate(vec, vec + 5, 1, times<int>());
//	cout << prod << endl;
//
//	getch();
//	return 0;
//}

//Example 12.10
//
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <assert>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//class String {
//	char* str;
//public:
//	String()
//	{
//		str = 0;
//	}
//	String(char* s)
//	{
//		str = strdup(s);
//		assert(str);
//	}
//	int operator<(const String& s) const
//	{
//		return strcmp(str, s.str) < 0;
//	}
//	operator char* ()
//	{
//		return str;
//	}
//};
//
//char* list[] = { "epsilon", "omega", "theta", "rho", "alpha", "beta", "phi", "gamma", "delta"};
//
//const int N = sizeof(list) / sizeof(char*);
//
//
//int main()
//{
//	int i, j;
//	vector< String > v;
//
//	for (i = 0; i < N; i++)
//		v.push_back(String(list[i]));
//
//	random_shuffle(v.begin(), v.end());
//
//	for (j = 0; j < N; j++)
//		cout << v[j] << " ";
//	cout << endl;
//
//	sort(v.begin(), v.end());
//
//	for (j = 0; j < N; j++)
//		cout << v[j] << " ";
//	cout << endl;
//
//	
//	return 0;
//}

//Example 12.11:
//#include <iostream>
//#include <map>
//#include<string>
//#include<conio.h>
//
//using namespace std;
//
//int main()
//{
//    typedef map<string, long, less<string > > Map;
//    Map counter;
//    char buf[256];
//
//    while (cin >> buf)
//    {
//        counter[buf]++;
//    }
//
//    Map::iterator tt = counter.begin();
//    while (tt != counter.end())
//    {
//        cout << (*tt).first << " " << (*tt).second << endl;
//        tt++;
//    }
//
//    
//    return 0;
//}

//Example 13.1 

//#include <iostream>
//#include <time.h>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	time_t start, end;
//	char szInput[25];
//	double dif;
//
//	time(&start);
//	cout << "Please, enter your name: ";
//	cin >> szInput;
//	time(&end);
//	dif = difftime(end, start);
//	cout << "Hi " << szInput;
//	cout << " It took you " << dif << " seconds to type your name." << endl;
//
//	
//	return 0;
//}
// 
// Exercise 13.1:
//#include<iostream>
//using namespace std;
//
//void bubbleSort(int arr[], int size) {
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = 0; j < size - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int array[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter number at index " << i << ": ";
//		cin >> array[i];
//	}
//
//	bubbleSort(array, 5);
//
//	cout << "Sorted array: ";
//	for (int i = 0; i < 5; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//void selectionsort(int arr[], int size) {
//    for (int i = 0; i < size - 1; i++) {
//        int minIndex = i; //initialize minimum index with first index  assuming that it has smallest value
//
//        for (int j = i + 1; j < size; j++) {
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;  //if we found smaller value then update minindex
//            }
//        }
//
//        // Swap the found smallest with the first unsorted element
//        int temp = arr[i];
//        arr[i] = arr[minIndex];
//        arr[minIndex] = temp;
//    }
//}
//int main() {
//    int array[5];
//    	for (int i = 0; i < 5; i++) {
//    		cout << "Enter number at index " << i << ": ";
//    		cin >> array[i];
//    	}
//        selectionsort(array, 5);
//            cout << "Sorted array: ";
//        for (int i = 0; i < 5; i++) {
//            cout << array[i] << " ";
//        }
//        cout << endl;
//        return 0;
//}


//#include <iostream>
//using namespace std;
//
//void insertionSort(int x[], int n)
//{
//    int j, k, y;
//
//    
//    for (k = 1; k < n; k++)
//    {
//        // brief@:Insert x[k] into sorted file
//        y = x[k];
//
//        // Move down all elements greater than y
//        for (j = k - 1; j >= 0 && y < x[j]; j--)
//        {
//            x[j + 1] = x[j];
//        }
//
//        // Insert y at proper position
//        x[j + 1] = y;
//    }
//}
//
//int main()
//{
//    int arr[] = { 5, 2, 9, 1, 5, 6 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Original array: ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    insertionSort(arr, n);
//
//    cout << "Sorted array:   ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//void heapify(int arr[], int n, int i)
//{
//    int largest = i;          
//    int left = 2 * i + 1;     // left child
//    int right = 2 * i + 2;    // right child
//
//    // If left child is larger than root
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    // If right child is larger than largest 
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    // If largest is not root
//    if (largest != i)
//    {
//        swap(arr[i], arr[largest]);
//
//        
//        heapify(arr, n, largest);
//    }
//}
//
//
//void heapSort(int arr[], int n)
//{
//    //  max heap 
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i);
//
//    
//    for (int i = n - 1; i >= 0; i--)
//    {
//       
//        swap(arr[0], arr[i]);
//
//        
//        heapify(arr, i, 0);
//    }
//}
//
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; ++i)
//        cout << arr[i] << " ";
//    cout << "\n";
//}
//
//int main()
//{
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Original array:\n";
//    printArray(arr, n);
//
//    heapSort(arr, n);
//
//    cout << "Sorted array:\n";
//    printArray(arr, n);
//
//    return 0;
//}

//Exercise 13.2:
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//// Struct to keep track of statistics
//struct Stats {
//    long long comparisons = 0;
//    long long exchanges = 0;
//};
//
//void generateRandomArray(int arr[], int n) {
//    for (int i = 0; i < n; i++)
//        arr[i] = rand() % 100000;
//}
//
//void copyArray(int source[], int destination[], int n) {
//    for (int i = 0; i < n; i++)
//        destination[i] = source[i];
//}
//
//void bubbleSort(int arr[], int n, Stats& stats) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            stats.comparisons++;
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);
//                stats.exchanges++;
//            }
//        }
//    }
//}
//
//void selectionSort(int arr[], int n, Stats& stats) {
//    for (int i = 0; i < n - 1; i++) {
//        int min_idx = i;
//        for (int j = i + 1; j < n; j++) {
//            stats.comparisons++;
//            if (arr[j] < arr[min_idx])
//                min_idx = j;
//        }
//        if (min_idx != i) {
//            swap(arr[i], arr[min_idx]);
//            stats.exchanges++;
//        }
//    }
//}
//
//void insertionSort(int arr[], int n, Stats& stats) {
//    for (int i = 1; i < n; i++) {
//        int key = arr[i];
//        int j = i - 1;
//        while (j >= 0 && arr[j] > key) {
//            stats.comparisons++;
//            arr[j + 1] = arr[j];
//            j--;
//            stats.exchanges++;
//        }
//        if (j >= 0) stats.comparisons++; 
//        arr[j + 1] = key;
//        stats.exchanges++;
//    }
//}
//
//void heapify(int arr[], int n, int i, Stats& stats) {
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//
//    if (left < n) {
//        stats.comparisons++;
//        if (arr[left] > arr[largest])
//            largest = left;
//    }
//
//    if (right < n) {
//        stats.comparisons++;
//        if (arr[right] > arr[largest])
//            largest = right;
//    }
//
//    if (largest != i) {
//        swap(arr[i], arr[largest]);
//        stats.exchanges++;
//        heapify(arr, n, largest, stats);
//    }
//}
//
//void heapSort(int arr[], int n, Stats& stats) {
//    for (int i = n / 2 - 1; i >= 0; i--)
//        heapify(arr, n, i, stats);
//
//    for (int i = n - 1; i > 0; i--) {
//        swap(arr[0], arr[i]);
//        stats.exchanges++;
//        heapify(arr, i, 0, stats);
//    }
//}
//
//int main() {
//    srand(time(0));
//
//    int sizes[] = { 10, 100, 1000, 5000, 10000, 20000, 50000 };
//    int maxN = 50000;
//    int* original = new int[maxN];
//    int* temp = new int[maxN];
//
//    cout << "N,BubbleComp,BubbleExch,SelectionComp,SelectionExch,InsertionComp,InsertionExch,HeapComp,HeapExch\n";
//
//    for (int s = 0; s < 7; s++) {
//        int n = sizes[s];
//        generateRandomArray(original, n);
//
//        Stats bStats, sStats, iStats, hStats;
//
//        copyArray(original, temp, n);
//        bubbleSort(temp, n, bStats);
//
//        copyArray(original, temp, n);
//        selectionSort(temp, n, sStats);
//
//        copyArray(original, temp, n);
//        insertionSort(temp, n, iStats);
//
//        copyArray(original, temp, n);
//        heapSort(temp, n, hStats);
//
//        cout << n << ","
//            << bStats.comparisons << "," << bStats.exchanges << ","
//            << sStats.comparisons << "," << sStats.exchanges << ","
//            << iStats.comparisons << "," << iStats.exchanges << ","
//            << hStats.comparisons << "," << hStats.exchanges << "\n";
//    }
//
//    delete[] original;
//    delete[] temp;
//
//    return 0;
//}

//Exercise 13.3:
//#include <iostream>
//
//#include <ctime>
//using namespace std;
//void bubbleSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int arr[] = {2,5,7,3,1 }; 
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    clock_t start = clock();  //  @brief:Start timer
//
//    bubbleSort(arr, n);
//
//    clock_t end = clock();    // @brief:End timer
//
//    double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;
//    cout << "Bubble Sort took " << elapsed_secs << " seconds\n";
//
//    return 0;
//}