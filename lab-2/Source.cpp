////#include"Stack.h"
////#include<iostream>
////using namespace std;
////void ReverseStr(string &str){
////	stack s;
////	ItemType item;
////	for (char c : str) {
////		s.push(c);
////	}
////	for(int i = 0; i < str.length(); i++) {
////		str[i] = s.peek();
////		s.pop(item);
////	}
////}
////int main() {
////	/*stack s;
////	int item=0;
////	for (int  i = 0; i < 20; i++)
////	{
////		s.push(i);
////	}
////	for(int i =0;i<20;i++)
////	{
////		s.pop(i);
////		cout << i << endl;
////	}*/
////	string str = "Hello";
////	ReverseStr(str);
////	cout << str << endl;
////	return 0;
////}
////This was the code for exercise 2.1
////now we will implement the stack using templates
////#include"stack1.h"
////#include<iostream>
////using namespace std;
//////Given a fully parenthesized expression check weather the expression is balanced or not
////bool isBalanced(string exp) {
////	Stack<char> s;
////	for (char c : exp) {
////		if (c == '(' || c == '[' || c == '{') {
////			s.push(c);
////		}
////		else if (c == ')' || c == ']' || c == '}') {
////			if (s.isEmpty()) {
////				return false;
////			}
////			char top = s.Top();
////			if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
////				s.pop();
////			}
////			else {
////				return false;
////			}
////		}
////	}
////	return s.isEmpty();
////}
////int main() {
////	string exp = "((a+b)*c)";
////	if (isBalanced(exp)) {
////		cout << "Balanced" << endl;
////	}
////	else {
////		cout << "Not Balanced" << endl;
////	}
////	return 0;
////}
////now we will infix to post fix conversion 
//#include"stack1.h"
//#include<iostream>
//#include<string>
//using namespace std;
//int precedence(char c) {
//	if (c == '^') {
//		return 3;
//	}
//	else if (c == '*' || c == '/') {
//		return 2;
//	}
//	else if (c == '+' || c == '-') {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}
//string infixToPostfix(string exp) {
//	Stack<char> s;
//	string result;
//	for (char c : exp) {
//		if (isalnum(c)) {
//			result += c;
//		}
//		else if (c == '(') {
//			s.push(c);
//		}
//		else if (c == ')') {
//			while (!s.isEmpty() && s.Top() != '(') {
//				result += s.Top();
//				s.pop();
//			}
//			s.pop();
//		}
//		else {
//			while (!s.isEmpty() && precedence(c) <= precedence(s.Top())) {
//				result += s.Top();
//				s.pop();
//			}
//			s.push(c);
//		}
//	}
//	while (!s.isEmpty()) {
//		result += s.Top();
//		s.pop();
//	}
//	return result;
//}
////Now we will evaluate the postfix expression
//int evaluatePostfix(string exp) {
//	Stack<int> s;
//	for (char c : exp) {
//		if (isdigit(c)) {
//			s.push(c - '0');
//		}
//		else {
//			int op2 = s.Top();
//			s.pop();
//			int op1 = s.Top();
//			s.pop();
//			switch (c) {
//			case '+':
//				s.push(op1 + op2);
//				break;
//			case '-':
//				s.push(op1 - op2);
//				break;
//			case '*':
//				s.push(op1 * op2);
//				break;
//			case '/':
//				s.push(op1 / op2);
//				break;
//			}
//		}
//	}
//	return s.Top();
//}
//int main() {
//	string exp = "a+b*c";
//	cout << infixToPostfix(exp) << endl;
//	string exp1 = "231*+9-";
//	cout << evaluatePostfix(exp1) << endl;
//	return 0;
//}
//
