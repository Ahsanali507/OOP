//#include<iostream>
//using namespace std;
//
//class Student
//{
//	int regNo;
//	float cgpa;
//	string fName;
//	string lName;
//	string Program;
//
//public:
//
//
//	// Mutators
//
//	void set_regNo(int regNo)
//	{
//		if (regNo >= 501 && regNo <= 565)
//			this->regNo = regNo;
//		else
//			this->regNo = 0;
//
//	}
//	void set_cgpa(float cgpa)
//	{
//		if (cgpa >= 0.0 && cgpa <= 4.00)
//			this->cgpa = cgpa;
//		else
//			this->cgpa = -1;
//	}
//	void set_fName(string fName)
//	{
//		this->fName = fName;
//	}
//	void set_lName(string lName)
//	{
//		this->lName = lName;
//	}
//	void set_program(string Program)
//	{
//		this->Program = Program;
//	}
//
//	// Accessors
//
//	int get_regNo()
//	{
//		return this->regNo;
//	}
//	float get_cgpa()
//	{
//		return this->cgpa;
//	}
//	string get_fName()
//	{
//		return this->fName;
//	}
//	string get_lName()
//	{
//		return this->lName;
//	}
//	string get_program()
//	{
//		return this->Program;
//	}
//
//	// Parametrized Constructors
//
//	Student(int regNo, string fName, string lName, string Program)
//	{
//		set_regNo(regNo);
//		set_fName(fName);
//		set_lName(lName);
//		set_program(Program);
//
//		this->cgpa = -1;
//	}
//
//	Student(int regNo, string fName, string Program)
//	{
//		set_regNo(regNo);
//		set_fName(fName);
//		set_program(Program);
//
//		this->cgpa = -1;
//		this->lName = "";
//	}
//
//
//	Student(int regNo, string fName, string lName, string Program, float cgpa)
//	{
//		set_regNo(regNo);
//		set_fName(fName);
//		set_lName(lName);
//		set_program(Program);
//
//		set_cgpa(cgpa);
//	}
//
//	// Copy Constructor
//
//	Student(Student& obj)
//	{
//		fName = obj.fName;
//		lName = obj.lName;
//		regNo = obj.regNo;
//		cgpa = obj.cgpa;
//		Program = obj.Program;
//	}
//
//	// Set Method
//
//	void Set(int regNo, string fName, string lName, string Program, float cgpa)
//	{
//		set_cgpa(cgpa);
//		set_regNo(regNo);
//		set_fName(fName);
//		set_lName(lName);
//		set_program(Program);
//
//	}
//
//	// Read Method
//
//	void read()
//	{
//		cout << "\nEnter regNo:";
//		cin >> regNo;
//		set_regNo(regNo);
//
//		cout << "\nEnter cgpa:";
//		cin >> cgpa;
//		set_cgpa(cgpa);
//
//		cout << "\nEnter fName:";
//		cin >> fName;
//		set_fName(fName);
//
//		cout << "\nEnter lName:";
//		cin >> lName;
//		set_lName(lName);
//
//		cout << "\nEnter Program:";
//		cin >> Program;
//		set_fName(Program);
//
//	}
//
//
//	// write Method
//
//	void write()
//	{
//
//		cout << "\n\n" << this->fName << "\t" << this->lName << "\t" << this->regNo << "\t" << this->cgpa << "\t" << this->Program << endl;
//	}
//
//
//	// isFirstSemester 
//
//
//	bool isFirstSemester()
//	{
//		if (cgpa == -1)
//			return true;
//		else
//			return false;
//	}
//
//	// getPercentage 
//
//	float getPercentage()
//	{
//		if (cgpa >= 0.0)
//		{
//			return (cgpa * 9.5);
//		}
//		else
//		{
//			return -1;
//		}
//	}
//
//	//is Promoted
//
//	bool isPromoted()
//	{
//		if (cgpa >= 2.00)
//			return true;
//		else
//			return false;
//	}
//
//	// Destructor
//
//	~Student()
//	{
//		cout << "\n Destructor executed ....\n";
//	}
//};
//
//int main()
//{
//	Student s1(501, "Ahsan", "Ali", "BSSE", 3.00);
//	Student s2(502, "Ibtsam", "Sadiq", "BSSE", 3.85);
//	Student s3(501, "Junaid", "Khan", "BSSE", 3.70);
//	cout << "\nfName" << "\t" << "lName" << "\t" << "regNo" << "\t" << "CGPA" << "\t" << "Program";
//
//	s1.write();
//	s2.write();
//	s3.write();
//	//To check first Semester student we set -1
//
//	s1.set_cgpa(-1);
//
//	if (s1.isFirstSemester())
//	{
//		cout << "\nYes,it's first Semester Student\n";
//	}
//	else {
//		cout << "\nNot, first Semester Student\n";
//
//	}
//
//	if (s1.isPromoted())
//	{
//		cout << "\nYes,Student can be Promoted\n";
//	}
//	else {
//		cout << "\n Can't be promoted\n";
//
//	}
//
//	// For student s2 who cgpa 2.00 or greater 
//
//	if (s2.isPromoted())
//	{
//		cout << "\nYes,Student can be Promoted\n";
//	}
//	else {
//		cout << "\n Can't be promoted\n";
//
//	}
//
//
//
//  return 0;
//}