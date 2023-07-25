//#include <iostream>
//using namespace std;
//
//template<class T>
//class vector {
//public:
//	T* arr;
//	int size;
//
//	vector(int n) {
//		size = n;
//		arr = new T[size];
//	}
//
//	T dotProduct(vector& v) {
//		float ans=0.0;
//		for (int i = 0;i < size;i++) {
//			ans += this->arr[i] * v.arr[i];
//		}
//		return ans;
//	}
//};
//
//
//int main() {
//	vector<float> v1(3);
//	v1.arr[0] = 1.2;
//	v1.arr[1] = 2.2;
//	v1.arr[2] = 3.2;
//
//	vector<float> v2(3);
//	v2.arr[0] = 2.1;
//	v2.arr[1] = 3.1;
//	v2.arr[2] = 4.1;
//
//	float a = v1.dotProduct(v2);
//	cout << a << endl;
//
//
//	return 0;
//}