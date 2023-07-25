//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//int main() {
//
//	ofstream out;                           // create object
//	out.open("Data.txt");                   // open file 
//	string info;  
//	cout << "Enter about your self: ";
//	getline(cin , info);
//	out << info;                            // put data in that file                
//	out.close();                            // close that file
//
//
//	ifstream in;                            // create object
//	string content;
//	in.open("Data.txt");                    // open file
//	while (in.eof() == 0) {                 // jb tk in object data lena khtam nhi ho jata 
//		getline(in , content);              // content me wo sara data bhejte jao
//		cout << content << endl;            // or sath hi print krwate jao
//	}
//	in.close();                             // close the file
//	 
//
//
//	return 0;
//}