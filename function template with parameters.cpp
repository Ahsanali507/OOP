//#include <iostream>
//using namespace std;
//
//template<class T1,class T2>
//float average(T1 a, T2 b) {
//	float avg = (a + b) / 2.0;
//	return avg;
//}
//
//template<class T>
//void swapp(T& x, T& y) {
//	T temp = x;
//	x = y;
//	y = temp;
//}
//
//int main() {
//	float ans;
//	ans = average<int,int>(5, 2);
//	cout << "The average of these two numbers is %.3f " << ans << endl;
//
//	cout << endl;
//
//	int a = 3, b = 5;
//	swapp<int>(a, b);
//	cout << "The value of a after swap is: " << a << endl;
//	cout << "The value of b after swap is: " << b << endl;
//
//
//	return 0;
//}