//#include <iostream>
//using namespace std;
//
//class student {
//protected:
//	int rollNo;
//public:
//	void getRollNo() {
//		cout << "Enter the roll no of student: ";
//		cin >> rollNo;
//	}
//};
//
//class exam :public student {
//protected:
//	float maths;
//	float physics;
//	float chemistry;
//	float urdu;
//	float english;
//	float islamiyat;
//public:
//	void getMarks() {
//		cout << "Enter maths marks: ";
//		cin >> maths;
//		cout << "Enter physics marks: ";
//		cin >> physics;
//		cout << "Enter chemistry marks: ";
//		cin >> chemistry;
//		cout << "Enter urdu marks: ";
//		cin >> urdu;
//		cout << "Enter english marks: ";
//		cin >> english;
//		cout << "Enter islamiyat marks: ";
//		cin >> islamiyat;
//	}
//};
//
//class result :public exam {
//	//int percentage=(maths+physics+chemistry+urdu+english+islamiyat)*100/1100;
//public:
//	void display() {
//		cout << "The percentage of student whose roll no : " << rollNo << " is " << int((maths + physics + chemistry + urdu + english + islamiyat) * 100 / 1100)<<"%"<< endl;
//	}
//};
//
//int main() {
//	result obj1;
//	obj1.getRollNo();
//	obj1.getMarks();
//	obj1.display();
//
//	return 0;
//}