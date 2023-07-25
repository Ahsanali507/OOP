//#include<iostream>
//#include<vector>
//using namespace std;
//void display(vector<int>& v) {                    // display all the elements in vector
//    for (int i = 0; i < v.size(); i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    vector<int> vec1;
//    int element, size;
//    cout << "Enter the size of your vector" << endl;
//    cin >> size;
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Enter an element to add to this vector: ";
//        cin >> element;
//        vec1.push_back(element);                 // elements are pushed one by one in the vec1 integer vector
//    }
//    vec1.pop_back();
//    display(vec1);                               // call display function to display all elements of vec1
//
//    
//    vector<int> ::iterator iter = vec1.begin();  // iterator which insert number 566 in the first position
//    vec1.insert(iter+1,30, 566);                 // add 30 copies of 566 in the vec1 integer vector
//    display(vec1);
//
//    return 0;
//}
