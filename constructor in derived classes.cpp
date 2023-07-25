//#include <iostream>
//using namespace std;
//
//class base1 {
//	int data1;
//public:
//	base1(int a) {
//		data1 = a;
//		cout << "The base1 constructor execute" << endl;
//	}
//	void printData1() {
//		cout << "The value of data1 is: " << data1 << endl;
//	}
//};
//
//class base2 {
//	int data2;
//public:
//	base2(int b) {
//		data2 = b;
//		cout << "The base2 constructor execute" << endl;
//	}
//	void printData2() {
//		cout << "The value of data2 is: " << data2 << endl;
//	}
//};
//
//class derived : public base1, public base2{   // when we make base2 class virtual then base2 constructor execute first
//	int data3;
//	int data4;
//public:
//	derived(int a, int b, int c, int d) :base1(a), base2(b) {
//		data3 = c;
//		data4 = d;
//		cout << "The derived consructor execute" << endl;
//	}
//	void printData() {
//		cout << "The value of data3 is: " << data3 << endl;
//		cout << "The value of data4 is: " << data4 << endl;
//	}
//};
//int main() {
//	derived obj1(2, 3, 4, 5);
//	obj1.printData1();
//	obj1.printData2();
//	obj1.printData();
//
//	system("pause");
//
//	return 0;
//}