//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class simpleCal {
//protected:
//	int num1;
//	int num2;
//	char opr;
//public:
//	void utility() {
//		cout << "Enter the first number: ";
//		cin >> num1;
//		cout << "Enter the second number: ";
//		cin >> num2;
//		cout << "Enter the operation: ";
//		cin >> opr;
//	}
//	void display() {
//		switch (opr)
//		{
//		case '+':
//			cout << "The sum of Numbers is: " << num1 + num2 << endl;
//			break;
//		case '-':
//			cout << "The subtraction of Numbers is: " << num1 - num2 << endl;
//			break;
//		case '*':
//			cout << "The multiplication of Numbers is: " << num1 * num2 << endl;
//			break;
//		case '/':
//			cout << "The division of Numbers is: " << float(num1 / num2) << endl;
//			break;
//		default:
//			cout << "Invalid operator" << endl;
//			break;
//		}
//	}
//};
//
//class scientificCal {
//protected:
//	int num;
//	char func;
//public:
//	void utility2() {
//		cout << "Enter the number: ";
//		cin >> num;
//		cout << "Enter Your function: ";
//		cin >> func;
//	}
//	void display() {
//		switch (func)
//		{
//		case 's':
//			cout << "The answer of sin" << num << " is " << sin(num) << endl;
//			break;
//		case 'c':
//			cout << "The answer of cos" << num << " is " << cos(num) << endl;
//			break;
//		case 't':
//			cout << "The answer of tan" << num << " is " << tan(num) << endl;
//			break;
//		default:
//			cout << "Invalid function" << endl;
//			break;
//		}
//	}
//};
//
//class hybridCal : public simpleCal, public scientificCal {
//public:
//	void simpleCalResult() {
//		simpleCal :: display();
//	}                                // ambiguity resolution syntax==> classname :: func name
//	void scienCalResult() {
//		scientificCal :: display();
//	}
//};
//
//int main() {
//	hybridCal obj1,obj2;
//	obj1.utility();
//	obj1.simpleCalResult();
//	cout << endl;
//	obj2.utility2();
//	obj2.scienCalResult();
//
//	system("pause");
//	
//	return 0;
//}