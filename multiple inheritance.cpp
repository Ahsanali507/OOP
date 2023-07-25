//#include <iostream>
//using namespace std;
//
//class mother {
//protected:
//	string eyes;
//	string nose;
//public:
//	void setDatam(string e, string n) {
//		eyes = e;
//		nose = n;
//	}
//};
//
//class father {
//protected:
//	string hairs;
//	string face;
//public:
//	void setDataf(string h, string f) {
//		hairs = h;
//		face = f;
//	}
//};
//
//class child : public mother, public father {
//	string name;
//public:
//	void getName() {
//		cout << "Enter the name of child: ";
//		cin >> name;
//	}
//	void display() {
//		cout << "The name of Child is: " << name << endl;
//		cout << "The eyes of Child are: " << eyes << endl;
//		cout << "The nose of Child is: " << nose << endl;
//		cout << "The hairs of Child is: " << hairs << endl;
//		cout << "The face of Child is: " << face << endl;
//	}
//};
//
//int main() {
//	child obj1;
//	obj1.getName();
//	obj1.setDatam("brown", "long");
//	obj1.setDataf("curly black", "white face");
//	obj1.display();
//
//	return 0;
//}