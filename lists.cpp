//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void display(list<int>& lst) {
//    list<int> ::iterator it;
//    for (it = lst.begin(); it != lst.end(); it++)
//    {
//        cout << *it << " ";
//    }
//
//}
//
//int main() {
//
//    list<int> list1;  //empty list of 0 length
//
//    list1.push_back(5);
//    list1.push_back(7);
//    list1.push_back(1);
//    list1.push_back(9);
//    list1.push_back(12);
//    cout << "The list1 is: ";
//    display(list1);
//
//    cout << endl;
//
//    list<int> list2(3);  //empty list of length 3
//    list<int> ::iterator it = list2.begin();
//    *it = 45;
//    it++;
//    *it = 6;
//    it++;
//    *it = 9;
//    it++;
//    cout << "The list2 is: ";
//    display(list2);
//
//    cout << endl;
//
//    list1.sort();
//    list2.sort();
//    list1.merge(list2);
//    cout << "The sorted and merging lists 1 and 2 is: ";
//    display(list1);
//
//    cout << endl;
//
//    list1.remove(9);
//    cout << "The list1 after removing 9 from list1 is: ";
//    display(list1);
//
//
//    return 0;
//}
