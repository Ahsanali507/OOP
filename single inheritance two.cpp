//#include <iostream>
//using namespace std;
//
//class employee {
//	int id;
//public:
//	int age;
//	string name;
//	void setData() {
//		id = 01;
//		age = 22;
//		name = "ahsan";
//	}
//	int getId() {
//		return id;
//	}
//	int getAge() {
//		return age;
//	}
//	string getName() {
//		return name;
//	}
//	employee(){
//		name = "";
//		id = 0;
//		age = 0;
//	}
//};
//
//class programmer :public employee {
//	string degree;
//public:
//	void setDegree(string deg) {
//		degree = deg;
//	}
//	void display() {
//		cout << "The name of person is: " << name << endl;
//		cout << "The id of " << name << " is: " << getId() << endl;
//		cout << "The age of " << name << " is: " << age << endl;
//		cout << "The degree of " << name << " is: " << degree << endl;
//	}
//};
//
//int main() {
//	programmer obj1;
//	obj1.setDegree("SE");
//	obj1.setData();
//	obj1.display();
//
//	return 0;
//}