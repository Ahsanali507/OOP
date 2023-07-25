//#include <iostream>
//using namespace std;
//
//class point {
//	int a;
//public:
//	//void setData(int a) {
//	//OR
//	point & setData(int a) {
//		//a = a;              // ye argument a=a ko hi assign kre ga hmare member a ko nhi
//		this->a = a;          // ab ye member a ko assign hogi argument a ki value
//		return*this;          // ye hme us k pointer ki value de ga jis object ko pointer point kr rha ho
//	}
//	void getData() {
//		cout << "The value of a is: " << a << endl;
//	}
//};
//
//int main() {
//	point obj;
//	obj.setData(5).getData();
//	//obj.getData();
//
//	return 0;
//}