#include <iostream>
using namespace std;
// class A
class School
{
private:
	int schoolnumber;
	char schoolname[20];

public:
	void getschool()
	{
		cout << "Enter  a school number and school name  " << endl;
		cin >> schoolnumber >> schoolname;
	}
	void showschool()
	{
		cout << "School number " << schoolnumber << endl;
		cout << "School Name " << schoolname << endl;
	}
};
// class B
class Faculty : public School
{
private:
	int facultyid;
	char facultyname[20];

public:
	void getfaculty()
	{
		cout << "Entere Faculty id and faculty name " << endl;
		cin >> facultyid >> facultyname;
	}
	void showfaculty()
	{
		cout << "Faculty id " << facultyid << endl;
		cout << "Faculty name " << facultyname << endl;
	}
};
// class c
class Student : public School
{
private:
	int studentid;
	char studentname[20];

public:
	void getstudent()
	{
		cout << "Entere Faculty id and faculty name " << endl;
		cin >> studentid >> studentname;
	}
	void showstudent()
	{
		cout << "Faculty id " << studentid << endl;
		cout << "Faculty name " << studentname << endl;
	}
};
// class D
class Permanent : public Faculty
{
private:
	int pid;
	char pname[20];

public:
	void getp()
	{
		cout << "Enter a permanent faculty id and name " << endl;
		cin >> pid >> pname;
	}
	void showp()
	{
		cout << "Permanent faculty id " << pid << endl;
		cout << "Permanent faculty name " << pname << endl;
	}
};
// class E
class Visting : public Faculty
{
private:
	int vid;
	char vname[25];

public:
	void getv()
	{
		cout << "Enter a visting id and visting name " << endl;
		cin >> vid >> vname;
	}
	void showv()
	{
		cout << "Vistor id " << vid << endl;
		cout << "Vistor name " << vname << endl;
	}
};
// class F
class Privatestudent : public Student
{
private:
	int priavtestudentid;
	char privatestuentname[25];

public:
	void getprivatestudent()
	{
		cout << "Enter a private student id and name " << endl;
		cin >> priavtestudentid >> privatestuentname;
	}
	void showprivatestudent()
	{
		cout << "Private student id" << priavtestudentid << endl;
		cout << "Priavte student name " << privatestuentname << endl;
	}
};

// class G
class Regularstudent : public Student
{
private:
	int regularstudentid;
	char regularstuentname[25];

public:
	void getregularstudent()
	{
		cout << "Enter a private student id and name " << endl;
		cin >> regularstudentid >> regularstuentname;
	}
	void showregualrtudent()
	{
		cout << "Regular student id" << regularstudentid << endl;
		cout << "Regular student name " << regularstuentname << endl;
	}
};
int main()
{
	Permanent p1;

	p1.getschool();
	p1.showschool();
	p1.getfaculty();
	p1.showfaculty();
	p1.getp();
	p1.showp();

	Visting v1;
	v1.getv();
	v1.showv();

	Privatestudent pp1;
	pp1.getprivatestudent();
	pp1.showprivatestudent();

	Regularstudent r1;
	r1.getregularstudent();
	r1.showregualrtudent();
	return 0;
}