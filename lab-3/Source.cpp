#include<iostream>
#include<conio.h>
using namespace std;
//int Factorial(int x) {
//	if (x == 0) return -1;
//	else if (x == 1) return 1;
//	else {
//		return x* Factorial(x - 1);
//	}
//}
//int main() {
//	int y = 9;
//	int x = 3;
//	cout<< "Factorial of " << x << " is " << Factorial(x) << endl;
//}
//int mul(int a, int b) {
//	if (b == 0) return 0;
//	else if (b == 1) return a;
//	else {
//		return a + mul(a, b - 1);
//	}
//}
//int main() {
//	cout<<mul(3, 4);
//}
//void rev()
//{
//    char ch;
//    cin.get(ch);
//
//    if (ch != '\n')
//    {
//        rev();
//        cout.put(ch);
//    }
//}
//
//int main()
//{
//    cout << "Enter a string: ";
//    rev();
//    cout << endl;
//    return 0;
//}
//long Power(int X, int N) {
//    if (N == 0)
//        return 1;
//    else
//        return Power(X, N - 1) * X;
//}
//
//int main() {
//    cout << "N\t2^N\n"; // Table header
//    cout << "----------------\n";
//
//    for (int i = 0; i <= 20; i++) {
//        cout << i << "\t" << Power(2, i) << endl; // Printing 2^N for N = 0 to 20
//    }
//
//    return 0;
//}
//int Ackermann(int m, int n) {
//    if (m == 0)
//        return n + 1;
//    else if (m > 0 && n == 0)
//        return Ackermann(m - 1, 1);
//    else
//        return Ackermann(m - 1, Ackermann(m, n - 1));
//}
//
//int main() {
//    cout << "A(3,4) = " << Ackermann(3, 4) << endl;
//    return 0;
//}
//void printNumbers(int n) {
//    if (n < 0)
//        return;  // Base case: stop when n < 0
//    cout << n << " ";
//    printNumbers(n - 1);  // Recursive call
//}
//
//int main() {
//    int n = 10; // Example value
//    printNumbers(n);
//    return 0;
//}
//int binomialCoeff(int n, int k) {
//    if (k == 0 || k == n)
//        return 1; // Base case
//    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
//}
//
//int main() {
//    int n = 5, k = 2;
//    cout << "C(" << n << "," << k << ") = " << binomialCoeff(n, k) << endl;
//    return 0;
//}
bool isPrimeHelper(int n, int i) {
    if (i * i > n)
        return true;  // If no divisor found till sqrt(n), it's prime
    if (n % i == 0)
        return false; // Found a divisor
    return isPrimeHelper(n, i + 1); // Recursive check
}

bool isPrime(int n) {
    if (n < 2)
        return false; // Numbers < 2 are not prime
    return isPrimeHelper(n, 2);
}

int main() {
    int n = 29; // Example value
    if (isPrime(n))
        cout << n << " is Prime\n";
    else
        cout << n << " is Not Prime\n";
    return 0;
}