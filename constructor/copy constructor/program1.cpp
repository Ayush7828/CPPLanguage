#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
	int rno;
	char sname[10];
	int marks;

public:
	Student(int r, char sn[], int m)
	{
		rno = r;
		strcpy(sname, sn);
		marks = m;
		cout << "Parameterized constructor" << endl;
	}
	// copy constructor
	Student(Student &s)
	{
		rno = s.rno;
		strcpy(sname, s.sname);
		marks = s.marks;
		cout << "Copy Contrustor" << endl;
	}
	void showdata()
	{
		cout << "Roll no." << rno << "\n";
		cout << "Name:" << sname << endl;
		cout << "Marks:" << marks << endl;
	}
};
int main()
{

	Student s1(101, "ayush", 20);
	Student s2(102, "ay", 204);

	Student s3(s1);
	s1.showdata();
	s2.showdata();
	s3.showdata();
	return 0;
}