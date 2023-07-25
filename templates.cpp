//#include <iostream>
//using namespace std;
//
//template<class T>
//class operation {
//public:
//	T* arr;
//	int size;
//
//	operation(int n) {
//		size = n;
//		arr = new T[size];
//	}
//
//	T sum(operation& v) {
//		float add = 0;
//		for (int i = 0;i < size;i++) {
//			add += this->arr[i] + v.arr[i];
//		}
//		return add;
//	}
//
//	T sub(operation& v) {
//		float subtracion = 0;
//		for (int i = 0;i < size;i++) {
//			subtracion -= this->arr[i] - v.arr[i];
//		}
//		return subtracion;
//	}
//};
//
//int main() {
//	operation<float>v1(3);
//	v1.arr[0] = 2.2;
//	v1.arr[1] = 3.3;
//	v1.arr[2] = 4.4;
//
//	operation<float>v2(3);
//	v2.arr[0] = 1.1;
//	v2.arr[1] = 2.2;
//	v2.arr[2] = 3.3;
//
//	float a = v1.sum(v2);
//	float b = v1.sub(v2);
//
//	cout << "The sum of values of two objects is: " << a << endl;
//	cout << "The subtraction of values of two objects is: " << b << endl;
//
//	return 0;
//}