//#include <iostream>
//using namespace std;
//
//class CWH {
//protected:
//	string title;
//	float rating;
//public:
//	CWH(string s, float r) {
//		title = s;
//		rating = r;
//	}
//	virtual void display(){}
//};
//
//class CWHVIDEO : public CWH {
//	float videolength;
//public:
//	CWHVIDEO(string s, float r, float vl) :CWH(s, r) {
//		videolength = vl;
//	}
//	void display() {
//		cout << "This video is amazing with title: " << title << endl;
//		cout << "Rating: " << rating << endl;
//		cout << "The length of video is: " << videolength <<"minutes" << endl;
//	}
//};
//
//class CWHTEXT : public CWH {
//	int words;
//public:
//	CWHTEXT(string s, float r, int w) :CWH(s, r) {
//		words = w;
//	}
//	void display() {
//		cout << "This video is amazing with title: " << title << endl;
//		cout << "Rating: " << rating << "stars out of 5 stars"<<endl;
//		cout << "The text words of video are: " << words << endl;
//	}
//};
//
//int main() {
//	string title;
//	float rating, vlength;
//	int words;
//
//	title = "Best php tutorial";
//	rating = 4.6;
//	vlength = 5.06;
//	CWHVIDEO videoObj(title, rating, vlength);
//	//videoObj.display();
//
//	cout << endl;
//
//	title = "Best php tutorial with text";
//	rating = 4.8;
//	words = 180;
//	CWHTEXT textObj(title, rating, words);
//	//textObj.display();
//
//	CWH* ptr[2];
//	ptr[0] = &videoObj;
//	ptr[1] = &textObj;
//
//	ptr[0]->display();       // ptr[0] points the object videoObj so it call the display of object videoObj
//	ptr[1]->display();       // ptr[1] points the object textObj so it call the display of object textObj
//	
//	system("pause");
//
//	return 0;
//}