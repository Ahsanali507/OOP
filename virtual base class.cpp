//#include <iostream>
//using namespace std;
//
//class student {
//protected:
//	string name;
//	int roll_Num;
//public:
//	void setNum(string n,int num) {
//		name = n;
//		roll_Num = num;
//	}
//	void printNum() {
//		cout << "The name of student is: " << name << endl;
//		cout << "The roll number of "<<name<<" is: " << roll_Num << endl;
//	}
//};
//
//class test : virtual public student {
//protected:
//	int maths;
//	int physics;
//	int chemistry;
//	int english;
//	int urdu;
//	int pakstudy;
//public:
//	void setMarks(int m, int ph, int c, int e, int u, int ps) {
//		maths = m;
//		physics = ph;
//		chemistry = c;
//		english = e;
//		urdu = u;
//		pakstudy = ps;
//	}
//	void printMarks() {
//		cout << "The marks of math are: " << maths << endl;
//		cout << "The marks of physics are: " << physics << endl;
//		cout << "The marks of chemistry are: " << chemistry << endl;
//		cout << "The marks of english are: " << english << endl;
//		cout << "The marks of urdu are: " << urdu << endl;
//		cout << "The marks of pakstudy are: " << pakstudy << endl;
//	}
//};
//
//class sports : virtual public student {
//protected:
//	float score;
//public:
//	void setScore(float s) {
//		score = s;
//	}
//	void printScore() {
//		cout << "The score of " << name << " is: " << score << endl;
//	}
//};
//
//class result : public test, public sports {
//private:
//	float total;
//public:
//	void display() {
//		total = maths + physics + chemistry + english + urdu + pakstudy + score;
//		printNum();
//		printMarks();
//		printScore();
//		cout << "The total marks of " << name << " are: " << total << endl;
//	}
//};
//
//int main() {
//	result obj1;
//	obj1.setNum("Ahmad", 001);
//	obj1.setMarks(93, 76, 73, 90, 80, 47);
//	obj1.setScore(48.5);
//	obj1.display();
//
//	system("pause");
//
//	return 0;
//}