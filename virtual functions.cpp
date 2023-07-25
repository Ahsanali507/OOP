//#include<iostream>
//using namespace std;
//
//class base {
//public:
//	int base_data;
//	virtual void display() {          // when we make this function virtual then it will be overriden
//		cout << "1 Base class variable value is: " << base_data << endl;
//	}
//};
//
//class derived :public base {
//public:
//	int derived_data;
//	void display() {
//		cout << "2 Base class variable value is: " << base_data << endl;
//		cout << "2 Derived class variable value is: " << derived_data << endl;
//	}
//};
//
//int main() {
//	base* base_ptr;
//	base obj_base;
//	derived obj_derived;
//	base_ptr = &obj_derived;         // base ptr call the display() of derived class because it points to the obj of derived class 
//	base_ptr->base_data = 22;
//	//base_ptr->display();
//
//	derived* derived_ptr;
//	derived_ptr = &obj_derived;
//	derived_ptr->derived_data = 44; // base ptr call the display() of derived class because it points to the obj of derived class 
//	derived_ptr->display();
//
//	return 0;
//}