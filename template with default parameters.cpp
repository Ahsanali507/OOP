//#include <iostream>
//using namespace std;
//
//template<class T1=int,class T2=float, class T3=char>
//class Ahmad {
//public:
//	T1 data1;
//	T2 data2;
//	T3 data3;
//
//	Ahmad(T1 a, T2 b, T3 c) {
//		data1 = a;
//		data2 = b;
//		data3 = c;
//	}
//	void display() {
//		cout << "The value of data1 is: " << data1 << endl;
//		cout << "The value of data2 is: " << data2 << endl;
//		cout << "The value of data3 is: " << data3 << endl;
//	}
//};
//
//int main() {
//	Ahmad<>obj1(12, 13.2, 's');
//	obj1.display();
//
//	cout << endl;
//
//	Ahmad<char, int, float>obj2('a', 4, 5.5);
//	obj2.display();
//
//	return 0;
//}