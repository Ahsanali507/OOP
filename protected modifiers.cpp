//#include <iostream>
//using namespace std;
//class one {
//protected:
//	int id;
//public:
//	int age;
//	int salary;
//	void setData() {
//		id = 01;
//		age = 22;
//		salary = 23000;
//	}
//	int getId() {
//		return id;
//	}
//	int getAge() {
//		return age;
//	}
//	int getSalary() {
//		return salary;
//	}
//};
//class two : protected one {
//	string name;
//public:
//	void setName() {
//		name = "asad";
//	}
//	void display() {  // protected menbers of class one are not accessed
//		cout << "The name of person is: " << name << endl;
//		cout << "The id of person is: " << id << endl;
//		cout << "The name of person is: " << age << endl;
//		cout << "The name of person is: " << salary << endl;
//	}
//};
//
//int main() {
//	two obj1;
//	obj1.setName();
//	one obj2;
//	obj2.setData();
//	obj1.display();
//
//
//	return 0;
//}