//#include <iostream>
//using namespace std;
//
//class base {
//	int data1;
//public:
//	int data2;
//	void setData() {
//		data1 = 10;
//		data2 = 20;
//	}
//	int getdata1() {
//		return data1;
//	}
//	int getdata2() {
//		return data2;
//	}
//};
//
//class derived:public base {
//public:
//	int data3;
//	void process() {
//		data3 = data2 * getdata1();
//	}
//
//	void display() {
//		cout << "The value of data 1 is: " << getdata1() << endl;
//		cout << "The value of data 2 is: " << data2 << endl;
//		cout << "The value of data 3 is: " << data3 << endl;
//	}
//};
//
//int main() {
//	derived obj1;
//	obj1.setData();
//	obj1.process();
//	obj1.display();
//
//	return 0;
//}