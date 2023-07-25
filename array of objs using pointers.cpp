//#include <iostream>
//using namespace std;
//
//class shopItem {
//	int id;
//	int price;
//public:
//	void setData(int a, int b) {
//		id = a;
//		price = b;
//	}
//	void getData() {
//		cout << "The id of item is: " << id << endl;
//		cout << "The price of item is: " << price << endl;
//	}
//};
//
//int main() {
//	int size = 3;
//	shopItem* ptr = new shopItem[size];
//	shopItem* ptrtemp = ptr;
//	int i, p, j;
//
//	for (j = 0;j < size;j++) {
//		cout << "Enter the id and price of item: "<< j+1 << endl;
//		cin >> i >> p;
//		ptr->setData(i, p);
//		ptr++;
//	}
//
//	for (j = 0;j < size;j++) {
//		ptrtemp->getData();
//	}
//
//
//	return 0;
//}